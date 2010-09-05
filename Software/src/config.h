/*
 * config.h
 *
 *  Created on: Aug 26, 2010
 *      Author: irrenhaus
 */

#ifndef CONFIG_H_
#define CONFIG_H_

#include "stm32f10x.h"
#include "../FreeRTOS/FreeRTOS.h"

#define DISPLAY_TASK_STACK_SIZE configMINIMAL_STACK_SIZE+512

#define LED_TASK_PRIORITY tskIDLE_PRIORITY+4
#define DISPLAY_TASK_PRIORITY tskIDLE_PRIORITY+4


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

/** Functions **/
void configureSystem(void);

extern sysTick;

#endif /* CONFIG_H_ */
