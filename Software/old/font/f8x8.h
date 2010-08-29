/*
    created with FontEditor written by H. Reddmann
    HaReddmann at t-online dot de

    File Name           : f8x8.h
    Date                : 30.07.2006
    Font size in bytes  : 0x0376, 886
    Font width          : 8
    Font height         : 8
    Font first char     : 0x20
    Font last char      : 0x7A
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

#ifndef f8x8_H
#define f8x8_H

#define f8x8_WIDTH 8
#define f8x8_HEIGHT 8

const uint8_t  f8x8[] = {
    0x03, 0x76, 0x08, 0x08, 0x83, 0x20, 0x7A,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 
    0x04, 0x02, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x04, 
    0x00, 0x06, 0x06, 0x06, 0x06, 0x05, 0x05, 0x06, 0x06, 0x01, 0x04, 0x05, 0x04, 0x07, 0x06, 0x06, 
    0x06, 0x06, 0x06, 0x05, 0x05, 0x05, 0x05, 0x07, 0x05, 0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x02, 0x04, 0x04, 0x01, 0x01, 0x04, 0x01, 0x07, 0x04, 0x05, 
    0x04, 0x04, 0x02, 0x04, 0x02, 0x04, 0x04, 0x05, 0x03, 0x03, 0x03, 
    0x01, 0x02, 0x03, 0x05, 
    0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x03, 0x00, 
    0x09, 0x05, 0x0E, 0x0C, 0x09, 0x0E, 0x0C, 0x0A, 0x0E, 0x0C, 0x04, 0x00, 0x00, 0x00, 0x00, 0x0A, 
    0x00, 0x0C, 0x14, 0x0F, 0x0E, 0x10, 0x0E, 0x12, 0x0C, 0x02, 0x09, 0x0D, 0x08, 0x0E, 0x0B, 0x0E, 
    0x0F, 0x10, 0x11, 0x11, 0x0A, 0x0A, 0x09, 0x0C, 0x0D, 0x09, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x0D, 0x09, 0x0B, 0x0A, 0x0C, 0x06, 0x0C, 0x09, 0x03, 0x03, 0x09, 0x02, 0x0D, 0x08, 0x0C, 
    0x0A, 0x0A, 0x04, 0x0E, 0x05, 0x08, 0x07, 0x09, 0x07, 0x07, 0x0A, 
    0x43, 0x00, 0x03, 0x14, 0x03, 0x10, 0x00, 0xE0, 0x04, 0x72, 0x09, 0x20, 0x97, 0x84, 0x13, 0x00, 
    0x80, 0x0C, 0x70, 0x0A, 0x00, 0x80, 0x88, 0x02, 0x88, 0x20, 0x80, 0x00, 0x12, 0x48, 0x20, 0xA1, 
    0x08, 0x02, 0x00, 0x80, 0x08, 0x12, 0xC8, 0x20, 0x80, 0x04, 0x12, 0x48, 0x28, 0xA0, 0x04, 0xA2, 
    0x08, 0x50, 0x28, 0x11, 0xA7, 0x0C, 0x22, 0x00, 0x86, 0x00, 0x12, 0x08, 0x20, 0x82, 0x00, 0x02, 
    0x88, 0x20, 0x80, 0x04, 0x13, 0x00, 0xE0, 0x04, 0x12, 0x48, 0x25, 0x80, 0x04, 0x52, 0x49, 0x20, 
    0xA1, 0x04, 0x64, 0x04, 0x22, 0x0C, 0x20, 0xA0, 0x08, 0x50, 0x06, 0x00, 0xA0, 0x80, 0x12, 0x48, 
    0x20, 0x81, 0x00, 0x12, 0x48, 0x20, 0xA1, 0x80, 0x12, 0x00, 0xA0, 0x04, 0x12, 0x48, 0x20, 0x81, 
    0x00, 0x12, 0x48, 0x20, 0xE1, 0x04, 0x82, 0x04, 0x02, 0x00, 0x80, 0x0C, 0x40, 0x04, 0x01, 0x04, 
    0x90, 0x40, 0x46, 0x19, 0xA3, 0x08, 0x23, 0x4A, 0x20, 0xA2, 0x04, 0x32, 0xCC, 0x10, 0x05, 0x00, 
    0xA7, 0x00, 0x12, 0x48, 0x20, 0x80, 0x04, 0x12, 0x08, 0x20, 0x81, 0x04, 0x02, 0x48, 0x20, 0x81, 
    0x84, 0x02, 0x4A, 0x00, 0xE0, 0x04, 0x32, 0x08, 0x20, 0x83, 0x00, 0x32, 0x08, 0x20, 0x83, 0x04, 
    0x22, 0x48, 0x00, 0xA7, 0x00, 0x32, 0x08, 0x20, 0x83, 0x00, 0x32, 0x08, 0x20, 0x83, 0x84, 0x13, 
    0x00, 0xA7, 0x00, 0x12, 0x48, 0x20, 0x80, 0x04, 0x12, 0x08, 0x20, 0x81, 0x04, 0x02, 0xC8, 0x20, 
    0x00, 0xA7, 0x00, 0x12, 0x88, 0x00, 0x24, 0x10, 0x01, 0x48, 0x20, 0x02, 0x90, 0x11, 0x00, 0xE0, 
    0x04, 0x32, 0x08, 0x20, 0x83, 0x00, 0x12, 0x48, 0x20, 0x80, 0x04, 0x02, 0x88, 0x20, 0xC0, 0x10, 
    0x00, 0xA7, 0x08, 0x40, 0x46, 0x20, 0x23, 0x90, 0x11, 0x88, 0x00, 0xA7, 0x00, 0xA7, 0x00, 0x02, 
    0x94, 0x21, 0xC8, 0x08, 0x04, 0x1C, 0x12, 0x00, 0xA7, 0x08, 0x40, 0x06, 0x20, 0x80, 0x08, 0x40, 
    0x04, 0x09, 0x64, 0x10, 0x00, 0xA7, 0x8C, 0x40, 0x46, 0x20, 0x23, 0x10, 0x00, 0xA7, 0x80, 0x32, 
    0x44, 0x19, 0xA2, 0x08, 0x50, 0x04, 0x28, 0x03, 0x9C, 0x02, 0x00, 0xA7, 0x80, 0x32, 0x44, 0x19, 
    0xA2, 0x0C, 0x41, 0xC0, 0x29, 0x00, 0xE0, 0x04, 0x72, 0x09, 0x20, 0x97, 0x00, 0x72, 0x09, 0x20, 
    0x97, 0x84, 0x13, 0x00, 0xA7, 0x00, 0x12, 0x88, 0x00, 0x24, 0x10, 0x01, 0x48, 0x20, 0x02, 0x90, 
    0x40, 0x46, 0x19, 0xE0, 0x04, 0x32, 0x08, 0x20, 0x83, 0x00, 0x22, 0x08, 0x20, 0x80, 0x08, 0x50, 
    0xC2, 0x01, 0x04, 0xA7, 0x00, 0x12, 0x88, 0x00, 0x24, 0x10, 0x01, 0x48, 0x20, 0x02, 0x90, 0x40, 
    0x46, 0x01, 0x06, 0x00, 0xA0, 0x04, 0x12, 0x48, 0x20, 0x81, 0x00, 0x12, 0x48, 0x20, 0x80, 0x04, 
    0x12, 0x48, 0x20, 0xA1, 0x04, 0x64, 0x04, 0x32, 0xC2, 0x29, 0x80, 0x8C, 0x40, 0x46, 0x00, 0x87, 
    0x0C, 0x41, 0x46, 0x20, 0x23, 0x10, 0x70, 0x48, 0x00, 0x65, 0x08, 0x33, 0x44, 0x11, 0x46, 0x94, 
    0x01, 0x00, 0x65, 0x08, 0x33, 0x44, 0x11, 0xA0, 0x0C, 0x51, 0x84, 0x11, 0x65, 0x00, 0x45, 0x14, 
    0x41, 0x00, 0x19, 0x80, 0x0C, 0x40, 0x00, 0x11, 0x45, 0x14, 0x00, 0x65, 0x08, 0x32, 0x84, 0x21, 
    0x82, 0x8C, 0x32, 0x00, 0x44, 0x80, 0x02, 0x88, 0x20, 0x80, 0x00, 0x12, 0x48, 0x20, 0x80, 0x00, 
    0x22, 0x08, 0x28, 0x02, 0x10, 0x00, 0x83, 0x08, 0x40, 0x00, 0x01, 0x44, 0x10, 0x40, 0x00, 0x11, 
    0xC0, 0x10, 0x00, 0xA7, 0x08, 0x22, 0x88, 0x20, 0x82, 0x08, 0x60, 0x02, 0xC2, 0x08, 0x40, 0x04, 
    0x11, 0x44, 0x10, 0x01, 0x08, 0x20, 0x01, 0xC2, 0x08, 0x40, 0x04, 0x11, 0x44, 0x10, 0x70, 0x0A, 
    0x00, 0xC2, 0x08, 0x40, 0x00, 0x01, 0x44, 0x10, 0x40, 0x00, 0x11, 0xA0, 0x08, 0xE0, 0x10, 0x40, 
    0x02, 0x11, 0x00, 0xA2, 0x04, 0x12, 0x48, 0x20, 0x80, 0x04, 0x12, 0x08, 0x20, 0xE1, 0x00, 0xA7, 
    0x08, 0x40, 0x06, 0x20, 0x43, 0x18, 0x02, 0x00, 0x04, 0x1C, 0x00, 0x04, 0x1C, 0x02, 0xA7, 0x08, 
    0x50, 0x06, 0x09, 0x64, 0x08, 0x02, 0x00, 0xA7, 0x00, 0xE1, 0x08, 0x32, 0x02, 0x19, 0xE1, 0x08, 
    0x32, 0x02, 0x19, 0xC2, 0x10, 0x00, 0xE1, 0x08, 0x32, 0x02, 0x19, 0xC2, 0x10, 0x00, 0xC2, 0x08, 
    0x40, 0x04, 0x11, 0x44, 0x10, 0x41, 0x04, 0x11, 0xC0, 0x04, 0xE1, 0x90, 0x40, 0x02, 0x11, 0x80, 
    0x04, 0x32, 0x8A, 0x00, 0xA2, 0x0C, 0x12, 0x88, 0x00, 0x24, 0x10, 0x01, 0x0E, 0x01, 0xE1, 0x08, 
    0x32, 0x00, 0x82, 0x04, 0x22, 0x08, 0x20, 0x80, 0x08, 0x02, 0x08, 0x20, 0x82, 0x04, 0x12, 0x00, 
    0xE0, 0x08, 0x40, 0x04, 0x01, 0xC1, 0x90, 0x21, 0xC8, 0x08, 0x44, 0x1C, 0x00, 0xC1, 0x0C, 0x51, 
    0x06, 0x28, 0xC2, 0x08, 0xC1, 0x0C, 0x51, 0x04, 0x28, 0x43, 0x14, 0x61, 0x04, 0xA1, 0x80, 0x32, 
    0xC8, 0x28, 0xA0, 0x00, 0xC1, 0x04, 0x32, 0x08, 0x20, 0xE1, 0x00, 0x81, 0x84, 0x22, 0x08, 0x20, 
    0x80, 0x88, 0x12, 0x08, 0x00
};

#endif

