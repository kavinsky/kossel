// BitMap for splashscreen
// Generated with: http://www.digole.com/tools/PicturetoC_Hex_converter.php
// Please note that using the high-res version takes 402Bytes of PROGMEM.
//#define START_BMPHIGH

#if ENABLED(SHOW_BOOTSCREEN)
#if ENABLED(START_BMPHIGH)
#define START_BMPWIDTH      128
#define START_BMPHEIGHT      64
#define START_BMPBYTEWIDTH   16
#define START_BMPBYTES     1024 // START_BMPWIDTH * START_BMPHEIGHT / 8

const unsigned char start_bmp[START_BMPBYTES] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00,
  0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF,
  0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xE7, 0xFF, 0xFF,
  0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE3, 0xFF, 0xFF,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xE1, 0xFF, 0xFF,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xE0, 0xFF, 0xFF,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xE0, 0x7F, 0xFF,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xE0, 0x3F, 0xFF,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x03, 0xFF, 0xE0, 0x1F, 0xFF,
  0xE0, 0x0F, 0x80, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC1, 0x80, 0x01, 0xFF, 0xE0, 0x0F, 0xFF,
  0xE0, 0x3F, 0xE3, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC3, 0xC0, 0x00, 0xFF, 0xE0, 0x07, 0xFF,
  0xE0, 0x7F, 0xF7, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC3, 0xC0, 0x00, 0x7F, 0xE0, 0x03, 0xFF,
  0xE0, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x03, 0xC3, 0xC0, 0x00, 0x3F, 0xE0, 0x01, 0xFF,
  0xE0, 0xF8, 0xFF, 0x8F, 0x80, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0xFF,
  0xE1, 0xF0, 0x7F, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x7F,
  0xE1, 0xF0, 0x3E, 0x07, 0xC0, 0xFC, 0x00, 0x0F, 0x03, 0xC3, 0xC0, 0x1E, 0x07, 0xE0, 0x00, 0x3F,
  0xE1, 0xE0, 0x3E, 0x03, 0xC3, 0xFF, 0x00, 0x3F, 0xC3, 0xC3, 0xC0, 0x7F, 0x83, 0xE0, 0x00, 0x1F,
  0xE1, 0xE0, 0x3E, 0x03, 0xC7, 0xFF, 0x80, 0x7F, 0xE3, 0xC3, 0xC0, 0xFF, 0xC1, 0xE0, 0x00, 0x0F,
  0xE1, 0xE0, 0x3E, 0x03, 0xCF, 0xFF, 0xC0, 0xFF, 0xF3, 0xC3, 0xC1, 0xFF, 0xE0, 0xE0, 0x00, 0x07,
  0xE1, 0xE0, 0x3E, 0x03, 0xCF, 0xFF, 0xC0, 0xFF, 0xF3, 0xC3, 0xC1, 0xFF, 0xE0, 0xE0, 0x00, 0x03,
  0xE1, 0xE0, 0x3E, 0x03, 0xDF, 0x87, 0xE1, 0xF0, 0xFB, 0xC3, 0xC3, 0xE1, 0xF0, 0xE0, 0x00, 0x01,
  0xE1, 0xE0, 0x3E, 0x03, 0xDF, 0x03, 0xE1, 0xF0, 0xFB, 0xC3, 0xC3, 0xE1, 0xF0, 0xE0, 0x00, 0x00,
  0xE1, 0xE0, 0x3E, 0x03, 0xDE, 0x01, 0xE1, 0xE0, 0x7B, 0xC3, 0xC3, 0xC0, 0xF0, 0xE0, 0x00, 0x00,
  0xE1, 0xE0, 0x3E, 0x03, 0xDE, 0x01, 0xE1, 0xE0, 0x7B, 0xC3, 0xC3, 0xC0, 0xF0, 0xE0, 0x00, 0x00,
  0xE1, 0xE0, 0x3E, 0x03, 0xDE, 0x01, 0xE1, 0xE0, 0x03, 0xC3, 0xC3, 0xC0, 0xF0, 0xE0, 0x00, 0x00,
  0xE1, 0xE0, 0x3E, 0x03, 0xDE, 0x01, 0xE1, 0xE0, 0x03, 0xC3, 0xC3, 0xC0, 0xF0, 0xE0, 0x00, 0x00,
  0xE1, 0xE0, 0x3E, 0x03, 0xDF, 0x01, 0xE1, 0xE0, 0x03, 0xC3, 0xC3, 0xC0, 0xF0, 0xE0, 0x00, 0x00,
  0xE1, 0xE0, 0x3E, 0x03, 0xDF, 0x81, 0xE1, 0xE0, 0x03, 0xE3, 0xC3, 0xC0, 0xF0, 0xE0, 0x00, 0x00,
  0xE1, 0xE0, 0x3E, 0x03, 0xCF, 0xFD, 0xE1, 0xE0, 0x03, 0xE3, 0xC3, 0xC0, 0xF0, 0xE0, 0x00, 0x00,
  0xE1, 0xE0, 0x3E, 0x03, 0xCF, 0xFD, 0xFF, 0xE0, 0x01, 0xFB, 0xFF, 0xC0, 0xF0, 0xE0, 0x00, 0x00,
  0xE1, 0xE0, 0x3E, 0x03, 0xC7, 0xFD, 0xFF, 0xE0, 0x01, 0xFB, 0xFF, 0xC0, 0xF0, 0xE0, 0x00, 0x00,
  0xE1, 0xE0, 0x3E, 0x03, 0xC3, 0xFD, 0xFF, 0xE0, 0x00, 0xFB, 0xFF, 0xC0, 0xF0, 0xE0, 0x00, 0x00,
  0xE1, 0xE0, 0x3E, 0x03, 0xC0, 0xFD, 0xFF, 0xE0, 0x00, 0x7B, 0xFF, 0xC0, 0xF0, 0xE0, 0x00, 0x00,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00,
  0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xC0, 0x00, 0x00,
  0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00,
  0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00,
  0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00
};
#else
#define START_BMPWIDTH      80
#define START_BMPHEIGHT     34
#define START_BMPBYTEWIDTH  10
#define START_BMPBYTES      340 // START_BMPWIDTH * START_BMPHEIGHT / 8

const unsigned char start_bmp[START_BMPBYTES] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00,
  0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xFF,
  0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF3, 0xFF,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF1, 0xFF,
  0x0C, 0x1E, 0x78, 0x00, 0x00, 0x06, 0x00, 0x0F, 0xF0, 0xFF,
  0x0C, 0x3F, 0xFC, 0x00, 0x00, 0x06, 0x30, 0x07, 0xF0, 0x7F,
  0x0C, 0x33, 0xCC, 0x00, 0x00, 0x06, 0x30, 0x03, 0xF0, 0x3F,
  0x0C, 0x71, 0x8E, 0x00, 0x00, 0x06, 0x00, 0x01, 0xF0, 0x1F,
  0x0C, 0x61, 0x86, 0x3E, 0x07, 0xC6, 0x30, 0xF8, 0xF0, 0x0F,
  0x0C, 0x61, 0x86, 0x7F, 0x0F, 0xE6, 0x31, 0xFC, 0x70, 0x07,
  0x0C, 0x61, 0x86, 0xE3, 0x9C, 0x76, 0x33, 0x8E, 0x30, 0x03,
  0x0C, 0x61, 0x86, 0xC1, 0x98, 0x36, 0x33, 0x06, 0x30, 0x01,
  0x0C, 0x61, 0x86, 0xC1, 0x98, 0x36, 0x33, 0x06, 0x30, 0x00,
  0x0C, 0x61, 0x86, 0xC1, 0x98, 0x06, 0x33, 0x06, 0x30, 0x00,
  0x0C, 0x61, 0x86, 0xC1, 0x98, 0x06, 0x33, 0x06, 0x30, 0x00,
  0x0C, 0x61, 0x86, 0xE1, 0x98, 0x06, 0x33, 0x06, 0x30, 0x00,
  0x0C, 0x61, 0x86, 0x7D, 0xF8, 0x07, 0xBF, 0x06, 0x30, 0x00,
  0x0C, 0x61, 0x86, 0x3D, 0xF8, 0x03, 0xBF, 0x06, 0x30, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00,
  0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00,
  0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00
};
#endif
#endif

// Here comes a compile-time operation to match the extruder symbols
// on the info screen to the set number of extruders in configuration.h
//
// When only one extruder is selected, the "1" on the symbol will not
// be displayed.

#define STATUS_SCREENWIDTH      115 //Width in pixels
#define STATUS_SCREENHEIGHT     18 //Height in pixels
#define STATUS_SCREENBYTEWIDTH  15 //Width in bytes
#if EXTRUDERS == 1
const unsigned char status_screen0_bmp[] PROGMEM = { //AVR-GCC, WinAVR
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x07, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xF1, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x71, 0xF8, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xF0, 0x60,
  0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x4C, 0x03, 0x20,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x41, 0x00, 0x5E, 0x67, 0xA0,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x41, 0x00, 0x5E, 0xF7, 0xA0,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x5E, 0xF7, 0xA0,
  0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x5E, 0x67, 0xA0,
  0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x4C, 0x03, 0x20,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x60, 0xF0, 0x60,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x61, 0xF8, 0x60,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x71, 0xF8, 0xE0,
  0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xF1, 0xE0,
  0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7E, 0x07, 0xE0,
  0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0
};

const unsigned char status_screen1_bmp[] PROGMEM = { //AVR-GCC, WinAVR
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x07, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x01, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x0C, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x9E, 0x60,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6F, 0x9F, 0x60,
  0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x4F, 0x0F, 0x20,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x41, 0x00, 0x46, 0x66, 0x20,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x41, 0x00, 0x40, 0xF0, 0x20,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x40, 0xF0, 0x20,
  0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x46, 0x66, 0x20,
  0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x4F, 0x0F, 0x20,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x6F, 0x9F, 0x60,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x67, 0x9E, 0x60,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x73, 0x0C, 0xE0,
  0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x01, 0xE0,
  0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7E, 0x07, 0xE0,
  0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0
};

const unsigned char status_screen2_bmp[] PROGMEM = { //AVR-GCC, WinAVR
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x07, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xF1, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x71, 0xF8, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xF0, 0x60,
  0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x4C, 0x03, 0x20,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x5E, 0x67, 0xA0,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x5E, 0xF7, 0xA0,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x5E, 0xF7, 0xA0,
  0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x5E, 0x67, 0xA0,
  0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x41, 0x00, 0x4C, 0x03, 0x20,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x41, 0x00, 0x60, 0xF0, 0x60,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x61, 0xF8, 0x60,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x71, 0xF8, 0xE0,
  0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xF1, 0xE0,
  0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7E, 0x07, 0xE0,
  0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0
};

const unsigned char status_screen3_bmp[] PROGMEM = { //AVR-GCC, WinAVR
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x07, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x01, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x0C, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x9E, 0x60,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6F, 0x9F, 0x60,
  0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x4F, 0x0F, 0x20,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x46, 0x66, 0x20,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x40, 0xF0, 0x20,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x40, 0xF0, 0x20,
  0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x46, 0x66, 0x20,
  0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x41, 0x00, 0x4F, 0x0F, 0x20,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x41, 0x00, 0x6F, 0x9F, 0x60,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x67, 0x9E, 0x60,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x73, 0x0C, 0xE0,
  0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x01, 0xE0,
  0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7E, 0x07, 0xE0,
  0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0
};
#elif EXTRUDERS == 2
const unsigned char status_screen0_bmp[] PROGMEM = { //AVR-GCC, WinAVR
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x07, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xF1, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x71, 0xF8, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xF0, 0x60,
  0x7F, 0xC0, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x4C, 0x03, 0x20,
  0xFB, 0xE0, 0x00, 0x78, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x10, 0x41, 0x00, 0x5E, 0x67, 0xA0,
  0xF3, 0xE0, 0x00, 0x77, 0x70, 0x00, 0x00, 0x00, 0x00, 0x10, 0x41, 0x00, 0x5E, 0xF7, 0xA0,
  0xFB, 0xE0, 0x00, 0x7F, 0x70, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x5E, 0xF7, 0xA0,
  0x7B, 0xC0, 0x00, 0x38, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x5E, 0x67, 0xA0,
  0x7B, 0xC0, 0x00, 0x37, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x4C, 0x03, 0x20,
  0xFB, 0xE0, 0x00, 0x77, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x60, 0xF0, 0x60,
  0xF1, 0xE0, 0x00, 0x70, 0x70, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x61, 0xF8, 0x60,
  0xFF, 0xE0, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x71, 0xF8, 0xE0,
  0x3F, 0x80, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xF1, 0xE0,
  0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7E, 0x07, 0xE0,
  0x0E, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0
};

const unsigned char status_screen1_bmp[] PROGMEM = { //AVR-GCC, WinAVR
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x07, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x01, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x0C, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x9E, 0x60,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6F, 0x9F, 0x60,
  0x7F, 0xC0, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x4F, 0x0F, 0x20,
  0xFB, 0xE0, 0x00, 0x78, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x10, 0x41, 0x00, 0x46, 0x66, 0x20,
  0xF3, 0xE0, 0x00, 0x77, 0x70, 0x00, 0x00, 0x00, 0x00, 0x10, 0x41, 0x00, 0x40, 0xF0, 0x20,
  0xFB, 0xE0, 0x00, 0x7F, 0x70, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x40, 0xF0, 0x20,
  0x7B, 0xC0, 0x00, 0x38, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x46, 0x66, 0x20,
  0x7B, 0xC0, 0x00, 0x37, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x4F, 0x0F, 0x20,
  0xFB, 0xE0, 0x00, 0x77, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x6F, 0x9F, 0x60,
  0xF1, 0xE0, 0x00, 0x70, 0x70, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x67, 0x9E, 0x60,
  0xFF, 0xE0, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x73, 0x0C, 0xE0,
  0x3F, 0x80, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x01, 0xE0,
  0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7E, 0x07, 0xE0,
  0x0E, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0
};

const unsigned char status_screen2_bmp[] PROGMEM = { //AVR-GCC, WinAVR
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x07, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xF1, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x71, 0xF8, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xF0, 0x60,
  0x7F, 0xC0, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x4C, 0x03, 0x20,
  0xFB, 0xE0, 0x00, 0x78, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x5E, 0x67, 0xA0,
  0xF3, 0xE0, 0x00, 0x77, 0x70, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x5E, 0xF7, 0xA0,
  0xFB, 0xE0, 0x00, 0x7F, 0x70, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x5E, 0xF7, 0xA0,
  0x7B, 0xC0, 0x00, 0x38, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x5E, 0x67, 0xA0,
  0x7B, 0xC0, 0x00, 0x37, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x10, 0x41, 0x00, 0x4C, 0x03, 0x20,
  0xFB, 0xE0, 0x00, 0x77, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x10, 0x41, 0x00, 0x60, 0xF0, 0x60,
  0xF1, 0xE0, 0x00, 0x70, 0x70, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x61, 0xF8, 0x60,
  0xFF, 0xE0, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x71, 0xF8, 0xE0,
  0x3F, 0x80, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xF1, 0xE0,
  0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7E, 0x07, 0xE0,
  0x0E, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0
};

const unsigned char status_screen3_bmp[] PROGMEM = { //AVR-GCC, WinAVR
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x07, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x01, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x0C, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x9E, 0x60,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6F, 0x9F, 0x60,
  0x7F, 0xC0, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x4F, 0x0F, 0x20,
  0xFB, 0xE0, 0x00, 0x78, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x46, 0x66, 0x20,
  0xF3, 0xE0, 0x00, 0x77, 0x70, 0x00, 0x00, 0x00, 0x00, 0x82, 0x08, 0x00, 0x40, 0xF0, 0x20,
  0xFB, 0xE0, 0x00, 0x7F, 0x70, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x40, 0xF0, 0x20,
  0x7B, 0xC0, 0x00, 0x38, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x46, 0x66, 0x20,
  0x7B, 0xC0, 0x00, 0x37, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x10, 0x41, 0x00, 0x4F, 0x0F, 0x20,
  0xFB, 0xE0, 0x00, 0x77, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x10, 0x41, 0x00, 0x6F, 0x9F, 0x60,
  0xF1, 0xE0, 0x00, 0x70, 0x70, 0x00, 0x00, 0x00, 0x00, 0x20, 0x82, 0x00, 0x67, 0x9E, 0x60,
  0xFF, 0xE0, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x04, 0x00, 0x73, 0x0C, 0xE0,
  0x3F, 0x80, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x01, 0xE0,
  0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7E, 0x07, 0xE0,
  0x0E, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0
};
#elif EXTRUDERS == 3
const unsigned char status_screen0_bmp[] PROGMEM = { //AVR-GCC, WinAVR
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x07, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xF1, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x71, 0xF8, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xF0, 0x60,
  0x7F, 0xC0, 0x00, 0x3F, 0xE0, 0x00, 0x1F, 0xF0, 0x00, 0x20, 0x82, 0x00, 0x4C, 0x03, 0x20,
  0xFB, 0xE0, 0x00, 0x78, 0xF0, 0x00, 0x38, 0x38, 0x00, 0x10, 0x41, 0x00, 0x5E, 0x67, 0xA0,
  0xF3, 0xE0, 0x00, 0x77, 0x70, 0x00, 0x3F, 0x78, 0x00, 0x10, 0x41, 0x00, 0x5E, 0xF7, 0xA0,
  0xFB, 0xE0, 0x00, 0x7F, 0x70, 0x00, 0x3E, 0xF8, 0x00, 0x20, 0x82, 0x00, 0x5E, 0xF7, 0xA0,
  0x7B, 0xC0, 0x00, 0x38, 0xE0, 0x00, 0x1F, 0x70, 0x00, 0x41, 0x04, 0x00, 0x5E, 0x67, 0xA0,
  0x7B, 0xC0, 0x00, 0x37, 0xE0, 0x00, 0x1F, 0xB0, 0x00, 0x82, 0x08, 0x00, 0x4C, 0x03, 0x20,
  0xFB, 0xE0, 0x00, 0x77, 0xF0, 0x00, 0x3F, 0xB8, 0x00, 0x82, 0x08, 0x00, 0x60, 0xF0, 0x60,
  0xF1, 0xE0, 0x00, 0x70, 0x70, 0x00, 0x38, 0x78, 0x00, 0x41, 0x04, 0x00, 0x61, 0xF8, 0x60,
  0xFF, 0xE0, 0x00, 0x7F, 0xF0, 0x00, 0x3F, 0xF8, 0x00, 0x20, 0x82, 0x00, 0x71, 0xF8, 0xE0,
  0x3F, 0x80, 0x00, 0x1F, 0xC0, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x78, 0xF1, 0xE0,
  0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x01, 0xFF, 0xFF, 0x80, 0x7E, 0x07, 0xE0,
  0x0E, 0x00, 0x00, 0x07, 0x00, 0x00, 0x03, 0x80, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0
};

const unsigned char status_screen1_bmp[] PROGMEM = { //AVR-GCC, WinAVR
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x07, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x01, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x0C, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x9E, 0x60,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6F, 0x9F, 0x60,
  0x7F, 0xC0, 0x00, 0x3F, 0xE0, 0x00, 0x1F, 0xF0, 0x00, 0x20, 0x82, 0x00, 0x4F, 0x0F, 0x20,
  0xFB, 0xE0, 0x00, 0x78, 0xF0, 0x00, 0x38, 0x38, 0x00, 0x10, 0x41, 0x00, 0x46, 0x66, 0x20,
  0xF3, 0xE0, 0x00, 0x77, 0x70, 0x00, 0x3F, 0x78, 0x00, 0x10, 0x41, 0x00, 0x40, 0xF0, 0x20,
  0xFB, 0xE0, 0x00, 0x7F, 0x70, 0x00, 0x3E, 0xF8, 0x00, 0x20, 0x82, 0x00, 0x40, 0xF0, 0x20,
  0x7B, 0xC0, 0x00, 0x38, 0xE0, 0x00, 0x1F, 0x70, 0x00, 0x41, 0x04, 0x00, 0x46, 0x66, 0x20,
  0x7B, 0xC0, 0x00, 0x37, 0xE0, 0x00, 0x1F, 0xB0, 0x00, 0x82, 0x08, 0x00, 0x4F, 0x0F, 0x20,
  0xFB, 0xE0, 0x00, 0x77, 0xF0, 0x00, 0x3F, 0xB8, 0x00, 0x82, 0x08, 0x00, 0x6F, 0x9F, 0x60,
  0xF1, 0xE0, 0x00, 0x70, 0x70, 0x00, 0x38, 0x78, 0x00, 0x41, 0x04, 0x00, 0x67, 0x9E, 0x60,
  0xFF, 0xE0, 0x00, 0x7F, 0xF0, 0x00, 0x3F, 0xF8, 0x00, 0x20, 0x82, 0x00, 0x73, 0x0C, 0xE0,
  0x3F, 0x80, 0x00, 0x1F, 0xC0, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x78, 0x01, 0xE0,
  0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x01, 0xFF, 0xFF, 0x80, 0x7E, 0x07, 0xE0,
  0x0E, 0x00, 0x00, 0x07, 0x00, 0x00, 0x03, 0x80, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0
};

const unsigned char status_screen2_bmp[] PROGMEM = { //AVR-GCC, WinAVR
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x07, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0xF1, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x71, 0xF8, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0xF8, 0x60,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xF0, 0x60,
  0x7F, 0xC0, 0x00, 0x3F, 0xE0, 0x00, 0x1F, 0xF0, 0x00, 0x41, 0x04, 0x00, 0x4C, 0x03, 0x20,
  0xFB, 0xE0, 0x00, 0x78, 0xF0, 0x00, 0x38, 0x38, 0x00, 0x82, 0x08, 0x00, 0x5E, 0x67, 0xA0,
  0xF3, 0xE0, 0x00, 0x77, 0x70, 0x00, 0x3F, 0x78, 0x00, 0x82, 0x08, 0x00, 0x5E, 0xF7, 0xA0,
  0xFB, 0xE0, 0x00, 0x7F, 0x70, 0x00, 0x3E, 0xF8, 0x00, 0x41, 0x04, 0x00, 0x5E, 0xF7, 0xA0,
  0x7B, 0xC0, 0x00, 0x38, 0xE0, 0x00, 0x1F, 0x70, 0x00, 0x20, 0x82, 0x00, 0x5E, 0x67, 0xA0,
  0x7B, 0xC0, 0x00, 0x37, 0xE0, 0x00, 0x1F, 0xB0, 0x00, 0x10, 0x41, 0x00, 0x4C, 0x03, 0x20,
  0xFB, 0xE0, 0x00, 0x77, 0xF0, 0x00, 0x3F, 0xB8, 0x00, 0x10, 0x41, 0x00, 0x60, 0xF0, 0x60,
  0xF1, 0xE0, 0x00, 0x70, 0x70, 0x00, 0x38, 0x78, 0x00, 0x20, 0x82, 0x00, 0x61, 0xF8, 0x60,
  0xFF, 0xE0, 0x00, 0x7F, 0xF0, 0x00, 0x3F, 0xF8, 0x00, 0x41, 0x04, 0x00, 0x71, 0xF8, 0xE0,
  0x3F, 0x80, 0x00, 0x1F, 0xC0, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x78, 0xF1, 0xE0,
  0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x01, 0xFF, 0xFF, 0x80, 0x7E, 0x07, 0xE0,
  0x0E, 0x00, 0x00, 0x07, 0x00, 0x00, 0x03, 0x80, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0
};

const unsigned char status_screen3_bmp[] PROGMEM = { //AVR-GCC, WinAVR
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x07, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x01, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x0C, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x9E, 0x60,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6F, 0x9F, 0x60,
  0x7F, 0xC0, 0x00, 0x3F, 0xE0, 0x00, 0x1F, 0xF0, 0x00, 0x41, 0x04, 0x00, 0x4F, 0x0F, 0x20,
  0xFB, 0xE0, 0x00, 0x78, 0xF0, 0x00, 0x38, 0x38, 0x00, 0x82, 0x08, 0x00, 0x46, 0x66, 0x20,
  0xF3, 0xE0, 0x00, 0x77, 0x70, 0x00, 0x3F, 0x78, 0x00, 0x82, 0x08, 0x00, 0x40, 0xF0, 0x20,
  0xFB, 0xE0, 0x00, 0x7F, 0x70, 0x00, 0x3E, 0xF8, 0x00, 0x41, 0x04, 0x00, 0x40, 0xF0, 0x20,
  0x7B, 0xC0, 0x00, 0x38, 0xE0, 0x00, 0x1F, 0x70, 0x00, 0x20, 0x82, 0x00, 0x46, 0x66, 0x20,
  0x7B, 0xC0, 0x00, 0x37, 0xE0, 0x00, 0x1F, 0xB0, 0x00, 0x10, 0x41, 0x00, 0x4F, 0x0F, 0x20,
  0xFB, 0xE0, 0x00, 0x77, 0xF0, 0x00, 0x3F, 0xB8, 0x00, 0x10, 0x41, 0x00, 0x6F, 0x9F, 0x60,
  0xF1, 0xE0, 0x00, 0x70, 0x70, 0x00, 0x38, 0x78, 0x00, 0x20, 0x82, 0x00, 0x67, 0x9E, 0x60,
  0xFF, 0xE0, 0x00, 0x7F, 0xF0, 0x00, 0x3F, 0xF8, 0x00, 0x41, 0x04, 0x00, 0x73, 0x0C, 0xE0,
  0x3F, 0x80, 0x00, 0x1F, 0xC0, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x78, 0x01, 0xE0,
  0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x01, 0xFF, 0xFF, 0x80, 0x7E, 0x07, 0xE0,
  0x0E, 0x00, 0x00, 0x07, 0x00, 0x00, 0x03, 0x80, 0x01, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xE0
};
#else
const unsigned char status_screen0_bmp[] PROGMEM = { //AVR-GCC, WinAVR
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0xC0, 0x00, 0x3F, 0xE0, 0x00, 0x1F, 0xF0, 0x00, 0x0F, 0xF8, 0x00, 0x08, 0x20, 0x80,
  0xFB, 0xE0, 0x00, 0x78, 0xF0, 0x00, 0x38, 0x38, 0x00, 0x1F, 0xBC, 0x00, 0x04, 0x10, 0x40,
  0xF3, 0xE0, 0x00, 0x77, 0x70, 0x00, 0x3F, 0x78, 0x00, 0x1F, 0x3C, 0x00, 0x04, 0x10, 0x40,
  0xFB, 0xE0, 0x00, 0x7F, 0x70, 0x00, 0x3E, 0xF8, 0x00, 0x1E, 0xBC, 0x00, 0x08, 0x20, 0x80,
  0x7B, 0xC0, 0x00, 0x38, 0xE0, 0x00, 0x1F, 0x70, 0x00, 0x0D, 0xB8, 0x00, 0x10, 0x41, 0x00,
  0x7B, 0xC0, 0x00, 0x37, 0xE0, 0x00, 0x1F, 0xB0, 0x00, 0x0C, 0x18, 0x00, 0x20, 0x82, 0x00,
  0xFB, 0xE0, 0x00, 0x77, 0xF0, 0x00, 0x3F, 0xB8, 0x00, 0x1F, 0xBC, 0x00, 0x20, 0x82, 0x00,
  0xF1, 0xE0, 0x00, 0x70, 0x70, 0x00, 0x38, 0x78, 0x00, 0x1F, 0xBC, 0x00, 0x10, 0x41, 0x00,
  0xFF, 0xE0, 0x00, 0x7F, 0xF0, 0x00, 0x3F, 0xF8, 0x00, 0x1F, 0xFC, 0x00, 0x08, 0x20, 0x80,
  0x3F, 0x80, 0x00, 0x1F, 0xC0, 0x00, 0x0F, 0xE0, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x7F, 0xFF, 0xE0,
  0x0E, 0x00, 0x00, 0x07, 0x00, 0x00, 0x03, 0x80, 0x00, 0x01, 0xC0, 0x00, 0x7F, 0xFF, 0xE0
};

const unsigned char status_screen1_bmp[] PROGMEM = { //AVR-GCC, WinAVR
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0xC0, 0x00, 0x3F, 0xE0, 0x00, 0x1F, 0xF0, 0x00, 0x0F, 0xF8, 0x00, 0x08, 0x20, 0x80,
  0xFB, 0xE0, 0x00, 0x78, 0xF0, 0x00, 0x38, 0x38, 0x00, 0x1F, 0xBC, 0x00, 0x04, 0x10, 0x40,
  0xF3, 0xE0, 0x00, 0x77, 0x70, 0x00, 0x3F, 0x78, 0x00, 0x1F, 0x3C, 0x00, 0x04, 0x10, 0x40,
  0xFB, 0xE0, 0x00, 0x7F, 0x70, 0x00, 0x3E, 0xF8, 0x00, 0x1E, 0xBC, 0x00, 0x08, 0x20, 0x80,
  0x7B, 0xC0, 0x00, 0x38, 0xE0, 0x00, 0x1F, 0x70, 0x00, 0x0D, 0xB8, 0x00, 0x10, 0x41, 0x00,
  0x7B, 0xC0, 0x00, 0x37, 0xE0, 0x00, 0x1F, 0xB0, 0x00, 0x0C, 0x18, 0x00, 0x20, 0x82, 0x00,
  0xFB, 0xE0, 0x00, 0x77, 0xF0, 0x00, 0x3F, 0xB8, 0x00, 0x1F, 0xBC, 0x00, 0x20, 0x82, 0x00,
  0xF1, 0xE0, 0x00, 0x70, 0x70, 0x00, 0x38, 0x78, 0x00, 0x1F, 0xBC, 0x00, 0x10, 0x41, 0x00,
  0xFF, 0xE0, 0x00, 0x7F, 0xF0, 0x00, 0x3F, 0xF8, 0x00, 0x1F, 0xFC, 0x00, 0x08, 0x20, 0x80,
  0x3F, 0x80, 0x00, 0x1F, 0xC0, 0x00, 0x0F, 0xE0, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x7F, 0xFF, 0xE0,
  0x0E, 0x00, 0x00, 0x07, 0x00, 0x00, 0x03, 0x80, 0x00, 0x01, 0xC0, 0x00, 0x7F, 0xFF, 0xE0
};

const unsigned char status_screen2_bmp[] PROGMEM = { //AVR-GCC, WinAVR
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0xC0, 0x00, 0x3F, 0xE0, 0x00, 0x1F, 0xF0, 0x00, 0x0F, 0xF8, 0x00, 0x10, 0x41, 0x00,
  0xFB, 0xE0, 0x00, 0x78, 0xF0, 0x00, 0x38, 0x38, 0x00, 0x1F, 0xBC, 0x00, 0x20, 0x82, 0x00,
  0xF3, 0xE0, 0x00, 0x77, 0x70, 0x00, 0x3F, 0x78, 0x00, 0x1F, 0x3C, 0x00, 0x20, 0x82, 0x00,
  0xFB, 0xE0, 0x00, 0x7F, 0x70, 0x00, 0x3E, 0xF8, 0x00, 0x1E, 0xBC, 0x00, 0x10, 0x41, 0x00,
  0x7B, 0xC0, 0x00, 0x38, 0xE0, 0x00, 0x1F, 0x70, 0x00, 0x0D, 0xB8, 0x00, 0x08, 0x20, 0x80,
  0x7B, 0xC0, 0x00, 0x37, 0xE0, 0x00, 0x1F, 0xB0, 0x00, 0x0C, 0x18, 0x00, 0x04, 0x10, 0x40,
  0xFB, 0xE0, 0x00, 0x77, 0xF0, 0x00, 0x3F, 0xB8, 0x00, 0x1F, 0xBC, 0x00, 0x04, 0x10, 0x40,
  0xF1, 0xE0, 0x00, 0x70, 0x70, 0x00, 0x38, 0x78, 0x00, 0x1F, 0xBC, 0x00, 0x08, 0x20, 0x80,
  0xFF, 0xE0, 0x00, 0x7F, 0xF0, 0x00, 0x3F, 0xF8, 0x00, 0x1F, 0xFC, 0x00, 0x10, 0x41, 0x00,
  0x3F, 0x80, 0x00, 0x1F, 0xC0, 0x00, 0x0F, 0xE0, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x7F, 0xFF, 0xE0,
  0x0E, 0x00, 0x00, 0x07, 0x00, 0x00, 0x03, 0x80, 0x00, 0x01, 0xC0, 0x00, 0x7F, 0xFF, 0xE0
};

const unsigned char status_screen3_bmp[] PROGMEM = { //AVR-GCC, WinAVR
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0xC0, 0x00, 0x3F, 0xE0, 0x00, 0x1F, 0xF0, 0x00, 0x0F, 0xF8, 0x00, 0x10, 0x41, 0x00,
  0xFB, 0xE0, 0x00, 0x78, 0xF0, 0x00, 0x38, 0x38, 0x00, 0x1F, 0xBC, 0x00, 0x20, 0x82, 0x00,
  0xF3, 0xE0, 0x00, 0x77, 0x70, 0x00, 0x3F, 0x78, 0x00, 0x1F, 0x3C, 0x00, 0x20, 0x82, 0x00,
  0xFB, 0xE0, 0x00, 0x7F, 0x70, 0x00, 0x3E, 0xF8, 0x00, 0x1E, 0xBC, 0x00, 0x10, 0x41, 0x00,
  0x7B, 0xC0, 0x00, 0x38, 0xE0, 0x00, 0x1F, 0x70, 0x00, 0x0D, 0xB8, 0x00, 0x08, 0x20, 0x80,
  0x7B, 0xC0, 0x00, 0x37, 0xE0, 0x00, 0x1F, 0xB0, 0x00, 0x0C, 0x18, 0x00, 0x04, 0x10, 0x40,
  0xFB, 0xE0, 0x00, 0x77, 0xF0, 0x00, 0x3F, 0xB8, 0x00, 0x1F, 0xBC, 0x00, 0x04, 0x10, 0x40,
  0xF1, 0xE0, 0x00, 0x70, 0x70, 0x00, 0x38, 0x78, 0x00, 0x1F, 0xBC, 0x00, 0x08, 0x20, 0x80,
  0xFF, 0xE0, 0x00, 0x7F, 0xF0, 0x00, 0x3F, 0xF8, 0x00, 0x1F, 0xFC, 0x00, 0x10, 0x41, 0x00,
  0x3F, 0x80, 0x00, 0x1F, 0xC0, 0x00, 0x0F, 0xE0, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00, 0x03, 0xE0, 0x00, 0x7F, 0xFF, 0xE0,
  0x0E, 0x00, 0x00, 0x07, 0x00, 0x00, 0x03, 0x80, 0x00, 0x01, 0xC0, 0x00, 0x7F, 0xFF, 0xE0
};
#endif // Extruders 

// SD Card logo.
#define STATUS_SDCARDWIDTH     11 //Width in pixels
#define STATUS_SDCARDHEIGHT    12 //Height in pixels
#define STATUS_SDCARDBYTEWIDTH  2 //Width in bytes
const unsigned char status_sdcard_bmp[] PROGMEM = { //AVR-GCC, WinAVR
  0xFF, 0x80,
  0xAA, 0xC0,
  0xAA, 0xE0,
  0xFF, 0xE0,
  0xFF, 0xE0,
  0xE4, 0xE0,
  0xDF, 0x60,
  0xED, 0x60,
  0xF5, 0x60,
  0xCC, 0xE0,
  0xFF, 0xE0,
  0xFF, 0xE0
};

// USB logo.
#define STATUS_USBWIDTH     11 //Width in pixels
#define STATUS_USBHEIGHT    12 //Height in pixels
#define STATUS_USBBYTEWIDTH  2 //Width in bytes
const unsigned char status_usb_bmp[] PROGMEM = { //AVR-GCC, WinAVR
  0x04, 0x00,
  0x0E, 0x00,
  0x04, 0x00,
  0x05, 0x80,
  0x05, 0x80,
  0x35, 0x00,
  0x36, 0x00,
  0x14, 0x00,
  0x0C, 0x00,
  0x04, 0x00,
  0x0E, 0x00,
  0x0E, 0x00
};

// Idle logo.
#define STATUS_UNKNOWNWIDTH     11 //Width in pixels
#define STATUS_UNKNOWNHEIGHT    12 //Height in pixels
#define STATUS_UNKNOWNBYTEWIDTH  2 //Width in bytes
const unsigned char status_unknown_bmp[] PROGMEM = { //AVR-GCC, WinAVR
  0x1F, 0x00,
  0x7F, 0xC0,
  0x71, 0xC0,
  0xEE, 0xE0,
  0xFE, 0xE0,
  0xFD, 0xE0,
  0xFB, 0xE0,
  0xFF, 0xE0,
  0x7B, 0xC0,
  0x7F, 0xC0,
  0x1F, 0x00,
  0x00, 0x00
};
