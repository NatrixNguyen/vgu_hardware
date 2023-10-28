#include <ArduinoJson.h>
#include <ArduinoJson.hpp>


#include <Arduino.h>
#if defined(ESP32) || defined(ARDUINO_RASPBERRY_PI_PICO_W)
#include <WiFi.h>
#elif defined(ESP8266)
#include <ESP8266WiFi.h>
#elif __has_include(<WiFiNINA.h>)
#include <WiFiNINA.h>
#elif __has_include(<WiFi101.h>)
#include <WiFi101.h>
#elif __has_include(<WiFiS3.h>)
#include <WiFiS3.h>
#endif

#include <Firebase_ESP_Client.h>

// Provide the token generation process info.
#include <addons/TokenHelper.h>


/* 1. Define the WiFi credentials */
#define WIFI_SSID "DAO"
#define WIFI_PASSWORD "0932822177"

/* 2. Define the API Key */
#define API_KEY "AIzaSyAZG0B_TR_TMrzoKLdnMsNkzoon9GxK_fY"

/* 3. Define the project ID */
#define FIREBASE_PROJECT_ID "testv1-7e5fa"

/* 4. Define the user Email and password that alreadey registerd or added in your project */
#define USER_EMAIL "nam@gmail.com"
#define USER_PASSWORD "nam123"

#define  USING_GDE029A1              // 2.9" V2 - BW - Blue Tab

    #define DC_PIN 2
    #define CS_PIN 4
    #define BUSY_PIN 5

#define     VIDEO_H    "video.h"
#include VIDEO_H

// (Example automatically picks the correct class and sample text)
#if     defined USING_DEPG0150BNS810
    #define     PANEL_CLASS     DEPG0150BNS810
    #define     SAMPLE_TEXT     "Fancy fonty text."
#elif   defined USING_DEPG0154BNS800
    #define     PANEL_CLASS     DEPG0154BNS800  
    #define     SAMPLE_TEXT     "Fancy font."   // Display too small
#elif   defined USING_GDEP015OC1
    #define     PANEL_CLASS     GDEP015OC1
    #define     SAMPLE_TEXT     "Fancy fonty text."  
#elif   defined USING_DEPG0213RWS800
    #define     PANEL_CLASS     DEPG0213RWS800
    #define     SAMPLE_TEXT     "Fancy fonty text."  
#elif   defined USING_QYEG0213RWS800
    #define     PANEL_CLASS     QYEG0213RWS800
    #define     SAMPLE_TEXT     "Fancy fonty text."    
#elif   defined USING_DEPG0290BNS75A
    #define     PANEL_CLASS     DEPG0290BNS75A
    #define     SAMPLE_TEXT     "Fancy fonty text."
#elif   defined USING_DEPG0290BNS800
    #define     PANEL_CLASS     DEPG0290BNS800
    #define     SAMPLE_TEXT     "Fancy fonty text."   
#elif   defined USING_GDE029A1
    #define     PANEL_CLASS     GDE029A1
    #define     SAMPLE_TEXT     "Fancy fonty text."
#endif

// Define Firebase Data object
FirebaseData fbdo;
FirebaseJson json;
FirebaseJsonData result;

//
String fieldValue;

FirebaseAuth auth;
FirebaseConfig config;

bool taskCompleted = false;

unsigned long dataMillis = 0;

#if defined(ARDUINO_RASPBERRY_PI_PICO_W)
WiFiMulti multi;
#endif

#include "heltec-eink-modules.h"

#include "Fonts/FreeSansBoldOblique9pt7b.h"   // Include the particular font  
#include "Fonts/FreeSansBoldOblique12pt7b.h"  
#include "Fonts/FreeSansBoldOblique18pt7b.h"  
#include "Fonts/FreeSansBoldOblique24pt7b.h"   

PANEL_CLASS display(DC_PIN, CS_PIN, BUSY_PIN);
PANEL_CLASS display_2(DC_PIN, CS_PIN, BUSY_PIN);

void setup() {

  
    Serial.begin(115200);

#if defined(ARDUINO_RASPBERRY_PI_PICO_W)
    multi.addAP(WIFI_SSID, WIFI_PASSWORD);
    multi.run();
#else
    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
#endif

    Serial.print("Connecting to Wi-Fi");
    unsigned long ms = millis();
    while (WiFi.status() != WL_CONNECTED)
    {
        Serial.print(".");
        delay(300);
#if defined(ARDUINO_RASPBERRY_PI_PICO_W)
        if (millis() - ms > 10000)
            break;
#endif
    }
    Serial.println();
    Serial.print("Connected with IP: ");
    Serial.println(WiFi.localIP());
    Serial.println();
    Serial.printf("Firebase Client v%s\n\n", FIREBASE_CLIENT_VERSION);
    config.api_key = API_KEY;
    auth.user.email = USER_EMAIL;
    auth.user.password = USER_PASSWORD;
#if defined(ARDUINO_RASPBERRY_PI_PICO_W)
    config.wifi.clearAP();
    config.wifi.addAP(WIFI_SSID, WIFI_PASSWORD);
#endif
    config.token_status_callback = tokenStatusCallback; // see addons/TokenHelper.h
    Firebase.reconnectNetwork(true);
    fbdo.setBSSLBufferSize(4096 /* Rx buffer size in bytes from 512 - 16384 */, 1024 /* Tx buffer size in bytes from 512 - 16384 */);
    fbdo.setResponseSize(2048);

    Firebase.begin(&config, &auth);
    DynamicJsonDocument doc(1024);

    if (Firebase.ready() && !taskCompleted)
    {
        taskCompleted = true;

        String collectionId = "products/08302bfd-399c-4871-bdfe-50e7d70c674e";

        Serial.print("List the documents in a collection... ");

        if (Firebase.Firestore.listDocuments(&fbdo, FIREBASE_PROJECT_ID, "", collectionId.c_str(), 3, "" , "" , "productTitle" , false))
            Serial.printf("ok\n%s\n\n", fbdo.payload().c_str());
        else
            Serial.println(fbdo.errorReason());
    }

    String documentPath = "products/08302bfd-399c-4871-bdfe-50e7d70c674e";
    String mask = "productTitle, productPrice";

  Serial.print("Get a document... ");
    if (Firebase.Firestore.getDocument(&fbdo, FIREBASE_PROJECT_ID, "", documentPath.c_str(), mask.c_str()))
        Serial.printf("ok\n%s\n\n", fbdo.payload().c_str());
    else
        Serial.println(fbdo.errorReason());


/*__________________________Deserialize_________________________________________________________*/
    DeserializationError error = deserializeJson(doc, fbdo.payload().c_str());
        if (error) {
          Serial.print(F("deserializeJson() failed: "));
          Serial.println(error.f_str());
          return;
        }
        const char* productTitle = doc["fields"]["productTitle"]["stringValue"];
        const char* productPrice = doc["fields"]["productPrice"]["stringValue"];
       Serial.println(productTitle);
       Serial.println(productPrice);

    /*.................................................................................................*/
    display.setRotation(PINS_LEFT);  // Landscape

    // display.setFont( & FreeSerifBoldItalic9pt7b );   // Pass (the address of) the font to the library  
    
    const char text[] = SAMPLE_TEXT;

    int text_top_edge; // These will receive information about how much space our text will take up 
    int text_left_edge;
    unsigned int text_width;
    unsigned int text_height;

    display.getTextBounds(productTitle, 0, 0, &text_left_edge, &text_top_edge, &text_width, &text_height);
    unsigned int cursor_demo_x_1 = display.bounds.full.left() - text_width - 5;  // 5px safety margin
    unsigned int cursor_demo_y_1 = display.bounds.full.bottom() - 30;

    display.getTextBounds(productPrice, 0, 0, &text_left_edge, &text_top_edge, &text_width, &text_height);
    unsigned int cursor_demo_x_2 = display.bounds.full.left() - text_width - 5;  // 5px safety margin
    unsigned int cursor_demo_y_2 = display.bounds.full.bottom() - 15;


    // DRAW ( display ) {

    //     display.setCursor(cursor_demo_x_1, cursor_demo_y_1);          
    //     display.print(productTitle);
    //     display.drawLine(0, cursor_demo_y_1, display.bounds.full.right(), cursor_demo_y_1, BLACK);

    //     display.setCursor(cursor_demo_x_2, cursor_demo_y_2);          
    //     display.print(productPrice);
    //     display.drawLine(0, cursor_demo_y_2, display.bounds.full.right(), cursor_demo_y_2, BLACK);
        
    // }

    // WindowBounds w = display.bounds.window;     // (saves typing)
    // int height = 30;
    // int width = 100;
    // int left = w.centerX() - (width / 2);
    // int top = w.centerY() - (height / 2);


    
    // display.setWindow(10, 10, 160, 100); //24

    DRAW (display) {
        // display.drawRect(w.left(), w.top(), w.width(), w.height(), BLACK);  // Put a border around the very edge of the window
        display.setFont( & FreeSansBoldOblique18pt7b );
        display.setCursor(10, 50);              // Set the (word-processor-like) cursor to the abritrary position of x=10, y=50          
        display.print(productTitle);
        // display.setCursor(10, 100);              // Set the (word-processor-like) cursor to the abritrary position of x=10, y=50          
        // display.print(productPrice);
        display.setFont( & FreeSansBoldOblique9pt7b ); 
        display.setCursor(10, 80); 
        display.print("Don gia: ");
        display.setFont( & FreeSansBoldOblique12pt7b ); 
        display.setCursor(10, 110);                     
        display.print(productPrice);
        display.setCursor(80, 110); 
        display.print(" dong");
        display.drawXBitmap(180, 15, video_bits, video_width, video_height, BLACK);
    } 

    // display.setWindow(190, 10, 160, 100); //24

    // DRAW (display) {
    //     display.drawXBitmap(0, 0, video_bits, video_width, video_height, BLACK);
    // }
      
    // display.setWindow(10, 60, 200, 50);

    // display.setFont( & FreeSansBoldOblique9pt7b ); 
    // DRAW (display) {
    //     display.setCursor(10, 60); 
    //     display.print("Don gia: ");
    // }

    // display.setFont( & FreeSansBoldOblique12pt7b ); 
    //  DRAW (display) {
    //     display.setCursor(10, 90);                     
    //     display.print(productPrice);
    //     display.setCursor(80, 90); 
    //     display.print(" dong");
    // } 
}

void loop() { }