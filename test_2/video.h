#define video_width 100
#define video_height 100
static unsigned char video_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0x87, 0x61, 0x00,
   0xf0, 0x7f, 0x18, 0xfe, 0xff, 0x3f, 0x00, 0xc0, 0xff, 0xff, 0x87, 0x61,
   0x00, 0xf0, 0xff, 0x38, 0xfe, 0xff, 0x3f, 0x00, 0xc0, 0xff, 0xff, 0xc7,
   0x61, 0x00, 0xf0, 0x7f, 0x18, 0xfe, 0xff, 0x3f, 0x00, 0xc0, 0x01, 0x00,
   0x86, 0xff, 0x03, 0x86, 0x1f, 0x07, 0x06, 0x00, 0x38, 0x00, 0xc0, 0x01,
   0x00, 0xc7, 0xff, 0x03, 0x86, 0x0f, 0x03, 0x0e, 0x00, 0x38, 0x00, 0xc0,
   0x01, 0x00, 0x86, 0xff, 0x03, 0x86, 0x1f, 0x07, 0x06, 0x00, 0x38, 0x00,
   0xc0, 0xa1, 0x0a, 0xc7, 0x01, 0x0f, 0x80, 0xe1, 0x17, 0x8e, 0xaa, 0x38,
   0x00, 0xc0, 0xf1, 0x1f, 0x86, 0x01, 0x1f, 0x80, 0xe1, 0x3f, 0x86, 0xff,
   0x38, 0x00, 0xc0, 0xe1, 0x1f, 0xc7, 0x01, 0x1f, 0x80, 0xe3, 0x1f, 0x8e,
   0x7f, 0x38, 0x00, 0xc0, 0xf1, 0x1f, 0x06, 0x60, 0x40, 0x85, 0x0b, 0x07,
   0x8e, 0xff, 0x38, 0x00, 0xc0, 0xe1, 0x1f, 0x07, 0x60, 0xc0, 0x87, 0x1f,
   0x03, 0x86, 0x7f, 0x38, 0x00, 0xc0, 0xf1, 0x1f, 0x06, 0x60, 0xc0, 0x87,
   0x0f, 0x07, 0x8e, 0xff, 0x38, 0x00, 0xc0, 0xe1, 0x1f, 0x07, 0xe0, 0x15,
   0x80, 0xa1, 0x03, 0x86, 0x7f, 0x38, 0x00, 0xc0, 0xf1, 0x1f, 0x06, 0xe0,
   0x1f, 0x80, 0xe3, 0x07, 0x8e, 0xff, 0x38, 0x00, 0xc0, 0xe1, 0x1f, 0x07,
   0xe0, 0x1f, 0x80, 0xe1, 0x03, 0x86, 0x7f, 0x38, 0x00, 0xc0, 0x01, 0x00,
   0x06, 0x61, 0x78, 0xd5, 0xe1, 0x00, 0x0e, 0x00, 0x38, 0x00, 0xc0, 0x01,
   0x00, 0xc7, 0x61, 0xfc, 0xff, 0x61, 0x00, 0x06, 0x00, 0x38, 0x00, 0xc0,
   0x01, 0x00, 0x86, 0x61, 0xf8, 0xff, 0xe3, 0x00, 0x0e, 0x00, 0x38, 0x00,
   0xc0, 0xab, 0xaa, 0xc7, 0x61, 0x18, 0x87, 0x61, 0x28, 0xae, 0xaa, 0x3a,
   0x00, 0xc0, 0xff, 0xff, 0x87, 0x61, 0x18, 0x8e, 0xe1, 0x38, 0xfe, 0xff,
   0x3f, 0x00, 0xc0, 0xff, 0xff, 0xc7, 0x61, 0x18, 0x86, 0x61, 0x18, 0xfe,
   0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0b, 0x7d, 0xdf, 0x03, 0x05,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x0f, 0xff, 0xff, 0x01,
   0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0f, 0xff, 0xff,
   0x01, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x0a, 0xc2, 0x01, 0x00,
   0xf0, 0xa1, 0x40, 0x15, 0xa0, 0x2a, 0x00, 0x00, 0xf0, 0x1f, 0x86, 0x01,
   0x00, 0xf0, 0xe1, 0xc0, 0x7f, 0xe0, 0x3f, 0x00, 0x00, 0xe0, 0x1f, 0xc7,
   0x01, 0x00, 0xf0, 0x63, 0xc0, 0x7f, 0xe0, 0x3f, 0x00, 0x00, 0x88, 0x43,
   0x00, 0x24, 0x00, 0xfa, 0x0b, 0x00, 0x70, 0xe9, 0x38, 0x00, 0x00, 0x0e,
   0xe3, 0x00, 0x7c, 0x00, 0xfe, 0x0f, 0x00, 0xf0, 0xff, 0x38, 0x00, 0x00,
   0x8e, 0xc3, 0x00, 0x7c, 0x00, 0xfe, 0x1f, 0x00, 0xf0, 0xff, 0x38, 0x00,
   0x00, 0x0e, 0xe8, 0x49, 0x70, 0x90, 0x06, 0x00, 0x90, 0x84, 0xe3, 0x00,
   0x00, 0x00, 0x0e, 0xf8, 0xff, 0x61, 0xf8, 0x0f, 0x00, 0xf8, 0x8f, 0xe3,
   0x00, 0x00, 0x00, 0x0e, 0xfc, 0xff, 0x61, 0xf8, 0x07, 0x00, 0xf8, 0x87,
   0xe3, 0x00, 0x00, 0x00, 0x90, 0x00, 0xf8, 0xf5, 0x02, 0x10, 0x04, 0xfa,
   0x9f, 0x13, 0x02, 0x00, 0x00, 0xf0, 0x03, 0xf0, 0xff, 0x03, 0x30, 0x1c,
   0xff, 0xff, 0x1f, 0x07, 0x00, 0x00, 0xf0, 0x03, 0xf0, 0xff, 0x03, 0x30,
   0x0c, 0xff, 0xff, 0x1f, 0x07, 0x00, 0x00, 0xf0, 0x27, 0xc9, 0x81, 0x83,
   0x44, 0x02, 0xfc, 0x71, 0x40, 0x07, 0x00, 0x00, 0xfe, 0xff, 0x87, 0x01,
   0xc3, 0x8f, 0x01, 0xf8, 0x71, 0xe0, 0x3f, 0x00, 0x00, 0xfe, 0xff, 0xc7,
   0x01, 0xc3, 0x87, 0x03, 0xf8, 0x30, 0xe0, 0x3f, 0x00, 0x00, 0xf0, 0xff,
   0x09, 0x40, 0xea, 0x21, 0x10, 0xf9, 0x45, 0x12, 0x3f, 0x00, 0xc0, 0xf1,
   0xff, 0x30, 0x60, 0xf8, 0x30, 0xfc, 0xff, 0x8f, 0x1f, 0x3f, 0x00, 0xc0,
   0xe1, 0xff, 0x38, 0x60, 0xf8, 0x30, 0xfc, 0xff, 0x8f, 0x1f, 0x3f, 0x00,
   0x00, 0x12, 0xfc, 0x41, 0x10, 0xf8, 0x00, 0x1c, 0xfc, 0x01, 0x00, 0x00,
   0x00, 0x00, 0x0e, 0xf8, 0xc7, 0x0f, 0xf8, 0x00, 0x1c, 0xf8, 0x71, 0x00,
   0x00, 0x00, 0x00, 0x0e, 0xfc, 0x87, 0x0f, 0xf8, 0x00, 0x0c, 0xf8, 0x70,
   0x00, 0x00, 0x00, 0x00, 0x0e, 0xe0, 0xc5, 0x1f, 0xf8, 0x00, 0x1c, 0xc0,
   0x01, 0x00, 0x00, 0x00, 0x00, 0x7e, 0xc0, 0xf8, 0x7f, 0xf8, 0x30, 0x0c,
   0xc0, 0x80, 0x1f, 0x00, 0x00, 0x00, 0x7e, 0xe0, 0xf0, 0x7f, 0xf8, 0x30,
   0x1c, 0xc0, 0x81, 0x1f, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x38, 0xfe, 0x84,
   0x20, 0x00, 0x00, 0x80, 0x1f, 0x00, 0x00, 0xc0, 0xff, 0x03, 0x3f, 0xfc,
   0x03, 0x80, 0xe3, 0x38, 0xf0, 0xff, 0x3f, 0x00, 0xc0, 0xff, 0x03, 0x3e,
   0xfc, 0x03, 0x80, 0x61, 0x18, 0xf0, 0xff, 0x3f, 0x00, 0xc0, 0xff, 0x02,
   0x24, 0x88, 0x07, 0x00, 0x41, 0x38, 0xf0, 0xeb, 0x3f, 0x00, 0xc0, 0x7f,
   0xfc, 0x00, 0x00, 0x1f, 0x30, 0x00, 0xf8, 0xff, 0xe3, 0x3f, 0x00, 0xc0,
   0x7f, 0xf8, 0x00, 0x00, 0x1f, 0x30, 0x00, 0xf8, 0xff, 0xe3, 0x3f, 0x00,
   0xc0, 0x75, 0xfc, 0x00, 0x00, 0x3d, 0x50, 0x00, 0xb8, 0x2e, 0xe1, 0x2a,
   0x00, 0xc0, 0xf1, 0xff, 0x07, 0x0e, 0xf8, 0x80, 0xe1, 0x38, 0x0e, 0xfc,
   0x00, 0x00, 0xc0, 0xe1, 0xff, 0x07, 0x0c, 0xf8, 0x80, 0x63, 0x18, 0x06,
   0xfc, 0x00, 0x00, 0xc0, 0x51, 0x5d, 0x05, 0x08, 0xf8, 0x81, 0xa0, 0x10,
   0x0e, 0xa8, 0x00, 0x00, 0xc0, 0x01, 0x1c, 0x00, 0xe0, 0xff, 0x3f, 0x00,
   0x07, 0xfe, 0x03, 0x3f, 0x00, 0xc0, 0x01, 0x18, 0x00, 0xe0, 0xff, 0x3f,
   0x00, 0x07, 0xfe, 0x03, 0x3f, 0x00, 0xc0, 0x01, 0x14, 0x00, 0xa0, 0xbf,
   0x2f, 0x00, 0x01, 0xfe, 0x03, 0x15, 0x00, 0xc0, 0xf1, 0xe3, 0xff, 0x01,
   0x1f, 0x86, 0x01, 0xf8, 0xff, 0xe3, 0x00, 0x00, 0xc0, 0xf1, 0xc3, 0xff,
   0x01, 0x1f, 0x86, 0x01, 0xf8, 0xff, 0xe3, 0x00, 0x00, 0x40, 0xa1, 0x42,
   0xd5, 0x01, 0x1f, 0x8e, 0x02, 0xb8, 0xaa, 0xa3, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x80, 0xe1, 0x1f, 0x3e, 0xfc, 0x3f, 0x80, 0x1f, 0x3f, 0x00, 0x00,
   0x00, 0x00, 0x80, 0xe1, 0x1f, 0x3e, 0xfc, 0x1f, 0x80, 0x1f, 0x3f, 0x00,
   0x00, 0x00, 0x00, 0x80, 0xe0, 0x17, 0x3f, 0x5c, 0x3f, 0x80, 0x0b, 0x15,
   0x00, 0xc0, 0xff, 0xff, 0x07, 0xe0, 0xc3, 0x3f, 0x1c, 0x3f, 0x8e, 0x03,
   0x00, 0x00, 0xc0, 0xff, 0xff, 0x07, 0xe0, 0xc3, 0x3f, 0x0c, 0x1f, 0x86,
   0x03, 0x00, 0x00, 0xc0, 0x55, 0x55, 0x07, 0xe0, 0x82, 0x3a, 0x14, 0x3f,
   0x8a, 0x03, 0x00, 0x00, 0xc0, 0x01, 0x00, 0x07, 0x7c, 0x00, 0x30, 0xe0,
   0x1f, 0x80, 0x1f, 0x07, 0x00, 0xc0, 0x01, 0x00, 0x06, 0x7c, 0x00, 0x30,
   0xe0, 0x3f, 0x80, 0x1f, 0x07, 0x00, 0xc0, 0x01, 0x00, 0x07, 0x5a, 0x00,
   0x70, 0xe0, 0x1d, 0x80, 0x1f, 0x05, 0x00, 0xc0, 0xf1, 0x1f, 0xc6, 0x01,
   0x18, 0xf0, 0x7f, 0xf8, 0xff, 0xff, 0x38, 0x00, 0xc0, 0xe1, 0x1f, 0x87,
   0x01, 0x18, 0xf0, 0xff, 0xf8, 0xff, 0xff, 0x38, 0x00, 0xc0, 0xf1, 0x1f,
   0x86, 0x01, 0x18, 0xf0, 0xff, 0xf8, 0xff, 0xff, 0x38, 0x00, 0xc0, 0xe1,
   0x1f, 0xc7, 0xff, 0x1f, 0x86, 0xe1, 0xff, 0x30, 0xfc, 0x00, 0x00, 0xc0,
   0xf1, 0x1f, 0x86, 0xff, 0x1f, 0x86, 0xe1, 0xff, 0x71, 0xfc, 0x00, 0x00,
   0xc0, 0xe1, 0x1f, 0xc7, 0xff, 0x1f, 0x8e, 0xe1, 0xff, 0x70, 0xfc, 0x00,
   0x00, 0xc0, 0xf1, 0x1f, 0x86, 0x0f, 0x1f, 0xfe, 0xe3, 0xff, 0xff, 0xff,
   0x07, 0x00, 0xc0, 0xe1, 0x1f, 0xc7, 0x0f, 0x1f, 0xfe, 0xe1, 0xff, 0xff,
   0xff, 0x07, 0x00, 0xc0, 0x51, 0x15, 0x86, 0x0f, 0x3f, 0xfe, 0xe1, 0xff,
   0xff, 0xff, 0x07, 0x00, 0xc0, 0x01, 0x00, 0x07, 0xe0, 0xc3, 0x87, 0x01,
   0x3f, 0x86, 0x1f, 0x07, 0x00, 0xc0, 0x01, 0x00, 0x06, 0xe0, 0xc3, 0x87,
   0x01, 0x3f, 0x8e, 0x1f, 0x07, 0x00, 0xc0, 0x01, 0x00, 0x07, 0xe0, 0xc3,
   0x87, 0x03, 0x1f, 0x86, 0x1f, 0x07, 0x00, 0xc0, 0xff, 0xff, 0x07, 0xe0,
   0x03, 0x80, 0x1f, 0xc3, 0x81, 0xe3, 0x00, 0x00, 0xc0, 0xff, 0xff, 0x07,
   0xe0, 0x03, 0x80, 0x0f, 0xc7, 0x80, 0xe3, 0x00, 0x00, 0xc0, 0xff, 0xff,
   0x07, 0xe0, 0x03, 0x80, 0x1f, 0xc7, 0x81, 0xe3, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00 };
