/*
 Port&Copyright: Mark de Jong, mail to mark at mdejong.de
 Copyright:      Hagen Reddmann  mailto HaReddmann at T-Online dot de
 Author:         Hagen Reddmann
 Remarks:        this Copyright must be included
 known Problems: none
 Version:        2.1. 2004
 Description:    Graphic Library for Nokia 6100 Display and compatible
 
 Changed by Nils Hesse 2010
*/
#ifndef XTAL
#define XTAL                        72000000                // must be changed
#endif

#define S65_IO_RS 1
#define S65_IO_CS 2
#define S65_IO_RESET 3

#define DELAY_ONE_MILLISECOND       (XTAL / 4 / 1000)       // must > 8

#define USE_CLIPPING                                        // support clipping
#define USE_HIGHCOLOR                                       // 65536 color mode
// #define USE_ORGINALCOLORS                                   // in 256 color mode use original color table
#define USE_AUTOINIT                                        // call glcdDisplayInit() automaticaly on startup
#define USE_LINES             // Linien und Frame Routinen aktivieren, vertikale+horizontale Linien sind immer möglich mit FilllRect
#define USE_ELLIPSES          // Kreise und Ellipsen
#define USE_FONTS             // Schriftausgaben


#define RGB(r,g,b)                (((r & 0xF8) << 8) | ((g & 0xFC) << 3) | ((b & 0xF8) >> 3))
#define NONE                      RGB(0x00, 0x40, 0x00)  // == tansparent, one green color reduced !!


#define BLACK                       RGB(0x00, 0x00, 0x00)  // for  8 bit colors R,G,B  3,3,2 Bits
#define WHITE                       RGB(0xFF, 0xFF, 0xFF)  // for 16 bit colors R,G,B  5,6,5 bits
#define RED                         RGB(0xFF, 0x00, 0x00)
#define GREEN                       RGB(0x00, 0xFF, 0x00)
#define BLUE                        RGB(0x00, 0x00, 0xFF)
#define YELLOW                      RGB(0xFF, 0xFF, 0x00)
#define MAGENTA                     RGB(0xFF, 0x00, 0xFF)
#define CYAN                        RGB(0x00, 0xFF, 0xFF)
#define GRAY                        RGB(0x80, 0x80, 0x40)
#define SILVER                      RGB(0xA0, 0xA0, 0x80)
#define GOLD                        RGB(0xA0, 0xA0, 0x40)

#ifndef COLOR_TABLE_BITS
#define COLOR_TABLE_BITS            2                 // 2^2 = 4 colors in color table (minimum)
#endif


#define COLOR_TABLE_SIZE  2 << COLOR_TABLE_BITS       // sizeof glcd_Colors[]


#define COLOR_INDEX_BK              0                 // index into glcd_Colors[] color table
#define COLOR_INDEX_FG              1
#define COLOR_INDEX_FR              2
#define COLOR_INDEX_SH              3


#ifndef SCREEN_COLOR0                         // default SCREEN_COLOR background
#define SCREEN_COLOR0               YELLOW
#endif
#ifndef SCREEN_COLOR1                         // default foreground color
#define SCREEN_COLOR1               BLACK
#endif
#ifndef SCREEN_COLOR2                         // default frame color
#define SCREEN_COLOR2               GRAY
#endif
#ifndef SCREEN_COLOR3                         // default shadow color
#define SCREEN_COLOR3               SILVER
#endif

#define SCREEN_COLOR                WHITE

// Attention! a copy of the screen definition is in glcd.h!
#ifndef SCREEN_WIDTH
#define SCREEN_WIDTH                132   // Siemens S65
#endif
#ifndef SCREEN_HEIGHT
#define SCREEN_HEIGHT               176   // to (0,0,131,175) to support hardware scrolling and splitting of display
#endif
#ifndef SCREEN_LEFT
#define SCREEN_LEFT                 0
#endif
#ifndef SCREEN_TOP
#define SCREEN_TOP                  0
#endif
#ifndef SCREEN_RIGHT
#define SCREEN_RIGHT                (SCREEN_WIDTH -1)
#endif
#ifndef SCREEN_BOTTOM
#define SCREEN_BOTTOM               (SCREEN_HEIGHT -1)
#endif

// glcd_MemCtrl initialization state change default orientation of display
#define ORIENTATION_0               (1 << MEM_RGB) | (1 << MEM_MX)
#define ORIENTATION_90              (1 << MEM_RGB) | (1 << MEM_VW) | (1 << MEM_90)
#define ORIENTATION_180             (1 << MEM_RGB) | (1 << MEM_MY) | (1 << MEM_180)
#define ORIENTATION_270             (1 << MEM_RGB) | (1 << MEM_MX) | (1 << MEM_MY) | (1 << MEM_VW) | (1 << MEM_90) | (1 << MEM_180)


#define ORIENTATION_DEFAULT         ORIENTATION_0
#define FLAGS_DEFAULT               0x00

#define FONT_HEADER_SIZE            7     // header size of fonts

#define INIT_DELAY                  0     // delay in milliseconds in glcdDisplayInit() sometimes needed if instable

  #define   MEM_90                  0               // virtual flag for orientation, does not exist in PCF8833
  #define   MEM_180                 1               // virtual flag for orientation
  #define   MEM_RGB                 3
  #define   MEM_LAO                 4
  #define   MEM_VW                  5
  #define   MEM_MX                  6
  #define   MEM_MY                  7

