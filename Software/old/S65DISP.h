/*******************************************************************************
* File Name      : S65DISP.h
* Description    : Header for S65 Display Code
*******************************************************************************/

#include "stm32f10x.h"
#include "util.h"

/*
Pining Siemens S65 Display on H103

RS     ...  PB1
RESET  ...  PB0
CS     ...  PC13
CLK    ...  SP1.SCK
DAT    ...  SP1.MOSI
 */

/* Macros for toggeling the GPIOs of the S65 Disp */

#define RS_PORT RCC_APB2Periph_GPIOB
#define RS_PIN GPIO_Pin_0
#define RESET_PORT RCC_APB2Periph_GPIOC
#define RESET_PIN GPIO_Pin_5
#define CS_PORT RCC_APB2Periph_GPIOC
#define CS_PIN GPIO_pin_4

#define RS_SET GPIO_WriteBit(GPIOB, GPIO_Pin_0, Bit_SET);
#define RS_CLR GPIO_WriteBit(GPIOB, GPIO_Pin_0, Bit_RESET);

#define RESET_SET GPIO_WriteBit(GPIOC, GPIO_Pin_5, Bit_SET);
#define RESET_CLR GPIO_WriteBit(GPIOC, GPIO_Pin_5, Bit_RESET);

#define CS_SET GPIO_WriteBit(GPIOC, GPIO_Pin_4, Bit_SET);
#define CS_CLR GPIO_WriteBit(GPIOC, GPIO_Pin_4, Bit_RESET);



void S65_init_GPIO(void);             /* Initialise the GPIO Lines for the S65 Display */
void S65_init_SPI(void);              /* Initialise the SPI for the S65 Display */
 
void S65_send_DATA(u16 data);         /* sends  16Bit Data through SPI1 */
void S65_send_CMD(u16 cmd);           /* sends a 16Bit command through SPI1 */

void S65_init(void);                  /* Initialise the S65 Display */

void S65_FillScreen(u16 color);       /* Fills the Screen with a color */
void S65_DrawBitmap(u8 *bitmap);      /* Draws a Bitmap to the Screen */

