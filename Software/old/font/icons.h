/*
    created with FontEditor written by H. Reddmann
    HaReddmann at t-online dot de

    File Name           : icons.h
    Date                : 06.08.2006
    Font size in bytes  : 0x002C, 44
    Font width          : 33
    Font height         : 24
    Font first char     : 0x30
    Font last char      : 0x30
    Font bits per pixel : 3
    Font is compressed  : true

    The font data are defined as

    struct _FONT_ {
     // common shared fields
       uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
       uint8_t    font_Width_in_Pixel_for_fixed_drawing;
       uint8_t    font_Height_in_Pixel_for_all_Characters;
       uint8_t    font_Bits_per_Pixels;
                    // if MSB are set then font is a compressed font
       uint8_t    font_First_Char;
       uint8_t    font_Last_Char;
       uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
                    // for each character the separate width in pixels,
                    // characters < 128 have an implicit virtual right empty row
                    // characters with font_Char_Widths[] == 0 are undefined

     // if compressed font then additional fields
       uint8_t    font_Byte_Padding;
                    // each Char in the table are aligned in size to this value
       uint8_t    font_RLE_Table[3];
                    // Run Length Encoding Table for compression
       uint8_t    font_Char_Size_in_Bytes[font_Last_Char - font_First_Char +1];
                    // for each char the size in (bytes / font_Byte_Padding) are stored,
                    // this get us the table to seek to the right beginning of each char
                    // in the font_data[].

     // for compressed and uncompressed fonts
       uint8_t    font_data[];
                    // bit field of all characters
    }
*/

#include <inttypes.h>
//#include <avr/pgmspace.h>

#ifndef icons_H
#define icons_H

#define icons_WIDTH 33
#define icons_HEIGHT 24

static uint8_t __attribute__ icons[] = {
    0x00, 0x2C, 0x21, 0x18, 0x83, 0x30, 0x30,
    0x20, 
    0x01, 0x04, 0x14, 0x32, 
    0x1F, 
    0x47, 0x15, 0x55, 0x54, 0x51, 0x87, 0x10, 0x5B, 0x6C, 0xB1, 0xC5, 0x1E, 0x42, 0x54, 0x51, 0x45, 
    0x15, 0x75, 0x08, 0xB1, 0xC5, 0x16, 0x5B, 0xEC, 0x21, 0x44, 0x15, 0x55, 0x54, 0x51, 0x07
};

#endif

