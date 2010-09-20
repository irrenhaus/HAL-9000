/*
 * config.h
 *
 *  Created on: Aug 26, 2010
 *      Author: irrenhaus
 */

#ifndef CONFIG_H_
#define CONFIG_H_

#include "stm32f10x.h"
#include "lib/lcd/lcd.h"

#define LCD_MIO283QT2

/** Display **/
#define DISPLAY_SPI_PERIPH RCC_APB2Periph_SPI1
#define DISPLAY_SPI_GPIO_PERIPH RCC_APB2Periph_GPIOA
#define DISPLAY_SPI_GPIO GPIOA
#define DISPLAY_SPI SPI1
#define DISPLAY_SPI_CLK_PIN GPIO_Pin_5
#define DISPLAY_SPI_MOSI_PIN GPIO_Pin_7
#define DISPLAY_SPI_MISO_PIN GPIO_Pin_6

#define DISPLAY_CS_PIN GPIO_Pin_4
#define DISPLAY_CS_GPIO GPIOC
#define DISPLAY_CS_PERIPH RCC_APB2Periph_GPIOC

#define DISPLAY_RESET_PIN GPIO_Pin_5
#define DISPLAY_RESET_GPIO GPIOC
#define DISPLAY_RESET_PERIPH RCC_APB2Periph_GPIOC

#define LCD_CS_DISABLE() GPIO_WriteBit(DISPLAY_CS_GPIO, DISPLAY_CS_PIN, Bit_SET);
#define LCD_CS_ENABLE() GPIO_WriteBit(DISPLAY_CS_GPIO, DISPLAY_CS_PIN, Bit_RESET);

#define LCD_RST_DISABLE() GPIO_WriteBit(DISPLAY_RESET_GPIO, DISPLAY_RESET_PIN, Bit_SET);
#define LCD_RST_ENABLE() GPIO_WriteBit(DISPLAY_RESET_GPIO, DISPLAY_RESET_PIN, Bit_RESET);

////////////////////////////////////
#define MENU_ICON_SIZE (32)
#define MENU_ICON_COUNT (4)

#define MENU_VIEWPORT_X (0)
#define MENU_VIEWPORT_Y (48)
#define MENU_VIEWPORT_W (LCD_WIDTH-1)
#define MENU_VIEWPORT_H (LCD_HEIGHT-48-1)

#define MENU_ICON_MENU_HOT_IMAGE ("hoticon.bmp")
#define MENU_ICON_MENU_HOT_X (((MENU_VIEWPORT_X + MENU_VIEWPORT_W) / 2) + (MENU_ICON_SIZE/2))
#define MENU_ICON_MENU_HOT_Y (((MENU_VIEWPORT_Y + MENU_VIEWPORT_H) / 2) - (MENU_ICON_SIZE/2))

#define TIRE_OUTLINE ((float)154)

/** Functions **/
void configureSystem(void);

#endif /* CONFIG_H_ */
