/*
 * glcdS65.h
 *
 *  Created on: Aug 26, 2010
 *      Author: irrenhaus
 */

#ifndef GLCDS65_H_
#define GLCDS65_H_

#include "stm32f10x.h"

#define SCREEN_WIDTH 176
#define SCREEN_HEIGHT 132

/* IO */
#define DISPLAY_SPI_PERIPH RCC_APB2Periph_SPI1
#define DISPLAY_SPI_GPIO_PERIPH RCC_APB2Periph_GPIOA
#define DISPLAY_SPI_GPIO GPIOA
#define DISPLAY_SPI SPI1
#define DISPLAY_SPI_CLK_PIN GPIO_Pin_5
#define DISPLAY_SPI_MOSI_PIN GPIO_Pin_7

#define DISPLAY_CS_PIN GPIO_Pin_4
#define DISPLAY_CS_GPIO GPIOC
#define DISPLAY_CS_PERIPH RCC_APB2Periph_GPIOC

#define DISPLAY_RESET_PIN GPIO_Pin_5
#define DISPLAY_RESET_GPIO GPIOC
#define DISPLAY_RESET_PERIPH RCC_APB2Periph_GPIOC

#define DISPLAY_RS_PIN GPIO_Pin_0
#define DISPLAY_RS_GPIO GPIOB
#define DISPLAY_RS_PERIPH RCC_APB2Periph_GPIOB

// Inverse logic
#define DISPLAY_DESELECT GPIO_WriteBit(DISPLAY_CS_GPIO, DISPLAY_CS_PIN, Bit_SET);
#define DISPLAY_SELECT GPIO_WriteBit(DISPLAY_CS_GPIO, DISPLAY_CS_PIN, Bit_RESET);

#define DISPLAY_DATATYPE_CMD GPIO_WriteBit(DISPLAY_RS_GPIO, DISPLAY_RS_PIN, Bit_SET);
#define DISPLAY_DATATYPE_DATA GPIO_WriteBit(DISPLAY_RS_GPIO, DISPLAY_RS_PIN, Bit_RESET);

#define DISPLAY_RESET_SET GPIO_WriteBit(DISPLAY_RESET_GPIO, DISPLAY_RESET_PIN, Bit_SET);
#define DISPLAY_RESET_CLR GPIO_WriteBit(DISPLAY_RESET_GPIO, DISPLAY_RESET_PIN, Bit_RESET);

/* COLORS */
#define RGB(r,g,b)                (((r & 0xF8) << 8) | ((g & 0xFC) << 3) | ((b & 0xF8) >> 3))
//#define RGB(r,g,b)			(((r>>3)<<11) | ((g>>2)<<5) | ((b>>3)<<0))
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

/* FUNCTIONS */
void glcdInit(void);
void glcdDisplayInit(void);

void glcdFillScreen(u16 color);
void glcdFillRect(u8 x1, u8 y1, u8 x2, u8 y2, u16 color);

#endif /* GLCDS65_H_ */
