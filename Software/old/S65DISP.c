/*******************************************************************************
 * File Name      : S65DISP.c
 * Description    : C Code for S65 Display
 *******************************************************************************/

#include "stm32f10x.h"
#include "S65DISP.h"

/*
 Pining Siemens S65 Display on H103

 RS     ...  PB1
 RESET  ...  PB0
 CS     ...  PC13
 CLK    ...  SP1.SCK
 DAT    ...  SP1.MOSI
 */

const u16 S65_CMD_INIT1[2] = { 0xFDFD, 0xFDFD };
const u16 S65_CMD_INIT2[10] = { 0xEF00, 0xEE04, 0x1B04, 0xFEFE, 0xFEFE, 0xEF90,
		0x4A04, 0x7F3F, 0xEE04, 0x4306 };
const u16 S65_CMD_INIT3[20] = { 0xEF90, 0x0983, 0x0800, 0x0BAF, 0x0A00, 0x0500,
		0x0600, 0x0700, 0xEF00, 0xEE0C, 0xEF90, 0x0080, 0xEFB0, 0x4902, 0xEF00,
		0x7F01, 0xE181, 0xE202, 0xE276, 0xE183 };
const u16 S65_CMD_INIT4[3] = { 0x8001, 0xEF90, 0x0000 };

/*******************************************************************************
 * Function Name  : S65_init_GPIO
 * Description    : Configures all the necessary GPIOs for the Display
 * Input          : None
 * Output         : None
 * Return         : None
 *******************************************************************************/

void S65_init_GPIO(void) {
	GPIO_InitTypeDef GPIOS65Init;

	RCC_APB2PeriphClockCmd(RS_PORT | CS_PORT | RESET_PORT, ENABLE);

	GPIOS65Init.GPIO_Pin = GPIO_Pin_0;
	GPIOS65Init.GPIO_Speed = GPIO_Speed_50MHz;
	GPIOS65Init.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(GPIOB, &GPIOS65Init);

	/* Clock is already active for the LED
	 * RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE); */
	GPIOS65Init.GPIO_Pin = GPIO_Pin_4 | GPIO_Pin_5;
	GPIOS65Init.GPIO_Speed = GPIO_Speed_50MHz;
	GPIOS65Init.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(GPIOC, &GPIOS65Init);

	CS_SET;
	RS_SET;

	RESET_CLR;
	delay_ms(50);
	RESET_SET; /* Reset LINE = High */
}

/*******************************************************************************
 * Function Name  : S65_init_SPI
 * Description    : Configures the SPI for the S65 Display
 * Input          : None
 * Output         : None
 * Return         : None
 *******************************************************************************/

void S65_init_SPI(void) {
	SPI_InitTypeDef SPI_S65Init;
	GPIO_InitTypeDef GPIO_InitStructure;

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SPI1, ENABLE); /* 72 MHz */

	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5 | GPIO_Pin_7;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure);

	SPI_S65Init.SPI_Direction = SPI_Direction_2Lines_FullDuplex;
	SPI_S65Init.SPI_Mode = SPI_Mode_Master;
	SPI_S65Init.SPI_DataSize = SPI_DataSize_16b;
	SPI_S65Init.SPI_CPOL = SPI_CPOL_Low;
	SPI_S65Init.SPI_CPHA = SPI_CPHA_1Edge;
	SPI_S65Init.SPI_NSS = SPI_NSS_Soft;
	SPI_S65Init.SPI_BaudRatePrescaler = SPI_BaudRatePrescaler_2; /* 72MHz/2 = 36 MHz Clock */
	SPI_S65Init.SPI_FirstBit = SPI_FirstBit_MSB;
	SPI_S65Init.SPI_CRCPolynomial = 7;

	SPI_Init(SPI1, &SPI_S65Init);

	SPI_Cmd(SPI1, ENABLE);

	/* Now you can send Data using SPI_I2S_SendData(SPI1, u16 Data)*/
}

/*******************************************************************************
 * Function Name  : S65_send_CMD
 * Description    : sends a 16Bit command through SPI1
 * Input          : u16 CMD
 * Output         : None
 * Return         : None
 *******************************************************************************/
void S65_send_CMD(u16 cmd) {
	RS_SET; /* RS High = Command */
	CS_CLR; /* Inverse Logic */
	SPI_I2S_SendData(SPI1, cmd);
	while (SPI_I2S_GetFlagStatus(SPI1, SPI_I2S_FLAG_TXE) == RESET)
		;
	CS_SET;
	//delay_ms(10);
}

/*******************************************************************************
 * Function Name  : S65_send_DATA
 * Description    : sends  16Bit Data through SPI1
 * Input          : u16 data
 * Output         : None
 * Return         : None
 *******************************************************************************/
void S65_send_DATA(u16 data) {
	RS_CLR; /* RS Low = Data */
	CS_CLR; /* Inverse Logic */
	SPI_I2S_SendData(SPI1, data);
	while (SPI_I2S_GetFlagStatus(SPI1, SPI_I2S_FLAG_TXE) == RESET)
		;
	CS_SET;
}

/*******************************************************************************
 * Function Name  : S65_init
 * Description    : Initialize the Display based on the register values from superkranz.de
 * Input          : None
 * Output         : None
 * Return         : None
 *******************************************************************************/
void S65_init(void) {
	int i;
	for (i = 0; i < 2; i++)
		S65_send_CMD(S65_CMD_INIT1[i]); /* 1. Init Sequence */
	delay_ms(50);
	for (i = 0; i < 10; i++)
		S65_send_CMD(S65_CMD_INIT2[i]); /* 2. Init Sequence */
	delay_ms(7);
	for (i = 0; i < 20; i++)
		S65_send_CMD(S65_CMD_INIT3[i]); /* 3. Init Sequence */
	delay_ms(50);
	for (i = 0; i < 3; i++)
		S65_send_CMD(S65_CMD_INIT4[i]); /* 4. Init Sequence */
	delay_ms(10);
	/* Display is ready to use */
}

/*******************************************************************************
 * Function Name  : S65_FillScreen
 * Description    : Fills the Screen of the Display
 * Input          : u16 color
 * Output         : None
 * Return         : None
 *******************************************************************************/

void S65_FillScreen(u16 color) {
	int i;
	S65_send_CMD(0xEF90);
	S65_send_CMD(0x0500);
	S65_send_CMD(0x0600);
	S65_send_CMD(0x0700);
	for (i = 0; i < 46464; i++)
		S65_send_DATA(color);
}

/*******************************************************************************
 * Function Name  : S65_DrawBitmap
 * Description    : Draws a Bitmap
 * Input          : u8 *bitmap...Pointer to the bitmap array
 (created by S65-Bitmap Converter from http://www.mikrocontroller.net/topic/59263#new (hagen))
 * Output         : None
 * Return         : None
 *******************************************************************************/
void S65_DrawBitmap(u8 *bitmap) {
	int i;
	u16 buffer;
	S65_send_CMD(0xEF90);
	S65_send_CMD(0x0500);
	S65_send_CMD(0x0600);
	S65_send_CMD(0x0700);
	for (i = 0; i < 19932; i++) /* Pixels to draw */
	{
		buffer = *bitmap << 8;
		bitmap++;
		buffer |= *bitmap;
		S65_send_DATA(buffer);
		bitmap++;
	}
}

