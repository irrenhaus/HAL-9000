/*
 * glcdS65.c
 *
 *  Created on: Aug 26, 2010
 *      Author: irrenhaus
 */

#include "stm32f10x.h"
#include "glcdS65.h"
#include "util.h"

const u16 INIT1[2] = { 0xFDFD, 0xFDFD };
const u16 INIT2[10] = { 0xEF00, 0xEE04, 0x1B04, 0xFEFE, 0xFEFE, 0xEF90, 0x4A04,
		0x7F3F, 0xEE04, 0x4306 };
const u16 INIT3[20] = { 0xEF90, 0x0983, 0x0800, 0x0BAF, 0x0A00, 0x0500, 0x0600,
		0x0700, 0xEF00, 0xEE0C, 0xEF90, 0x0080, 0xEFB0, 0x4902, 0xEF00, 0x7F01,
		0xE181, 0xE202, 0xE276, 0xE183 };
const u16 INIT4[3] = { 0x8001, 0xEF90, 0x0000 };

void spiWrite(u16 data) {
	SPI_I2S_SendData(DISPLAY_SPI, data);
	while (SPI_I2S_GetFlagStatus(DISPLAY_SPI, SPI_I2S_FLAG_TXE) == RESET)
		;
}

void sendCommand(u16 cmd) {
	DISPLAY_DATATYPE_CMD;
	DISPLAY_SELECT;

	spiWrite(cmd);

	DISPLAY_DESELECT;
}

void spiWriteBuffer(u16 *data, u16 length) {
	u16 i = 0;
	for (i = 0; i < length; i++) {
		spiWrite(data[i]);
	}
}

void sendData(u16 *data, u16 length) {
	DISPLAY_DATATYPE_DATA;
	DISPLAY_SELECT;

	spiWriteBuffer(data, length);

	DISPLAY_DESELECT;
}

void wait(u16 ms) {
	delay_ms(ms);
}

void glcdInit(void) {
	//GPIO Init
	GPIO_InitTypeDef GPIOS65Init;

	RCC_APB2PeriphClockCmd(DISPLAY_CS_PERIPH | DISPLAY_RESET_PERIPH
			| DISPLAY_RS_PERIPH | DISPLAY_SPI_GPIO_PERIPH, ENABLE);

	GPIOS65Init.GPIO_Pin = DISPLAY_CS_PIN;
	GPIOS65Init.GPIO_Speed = GPIO_Speed_50MHz;
	GPIOS65Init.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(DISPLAY_CS_GPIO, &GPIOS65Init);

	GPIOS65Init.GPIO_Pin = DISPLAY_RESET_PIN;
	GPIOS65Init.GPIO_Speed = GPIO_Speed_50MHz;
	GPIOS65Init.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(DISPLAY_RESET_GPIO, &GPIOS65Init);

	GPIOS65Init.GPIO_Pin = DISPLAY_RS_PIN;
	GPIOS65Init.GPIO_Speed = GPIO_Speed_50MHz;
	GPIOS65Init.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(DISPLAY_RS_GPIO, &GPIOS65Init);

	//SPI Init
	SPI_InitTypeDef SPI_S65Init;

	RCC_APB2PeriphClockCmd(DISPLAY_SPI_PERIPH, ENABLE);

	GPIOS65Init.GPIO_Pin = DISPLAY_SPI_CLK_PIN | DISPLAY_SPI_MOSI_PIN;
	GPIOS65Init.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIOS65Init.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DISPLAY_SPI_GPIO, &GPIOS65Init);

	SPI_S65Init.SPI_Direction = SPI_Direction_2Lines_FullDuplex;
	SPI_S65Init.SPI_Mode = SPI_Mode_Master;
	SPI_S65Init.SPI_DataSize = SPI_DataSize_16b;
	SPI_S65Init.SPI_CPOL = SPI_CPOL_Low;
	SPI_S65Init.SPI_CPHA = SPI_CPHA_1Edge;
	SPI_S65Init.SPI_NSS = SPI_NSS_Soft;
	SPI_S65Init.SPI_BaudRatePrescaler = SPI_BaudRatePrescaler_2; /* 72MHz/2 = 36 MHz Clock */
	SPI_S65Init.SPI_FirstBit = SPI_FirstBit_MSB;
	SPI_S65Init.SPI_CRCPolynomial = 7;

	SPI_Init(DISPLAY_SPI, &SPI_S65Init);

	SPI_Cmd(DISPLAY_SPI, ENABLE);

	DISPLAY_RESET_CLR;
	delay_ms(50);
	DISPLAY_RESET_SET;
}

void glcdFillScreen(u16 color) {
	const u16 writeCmd[4] = { 0xEF90, 0x0504, 0x0600, 0x0700 };
	u16 i = 0;
	u16 count = SCREEN_WIDTH * SCREEN_HEIGHT;

	for(; i < 4; i++)
		sendCommand((u16)writeCmd[i]);

	DISPLAY_DATATYPE_DATA;
	DISPLAY_SELECT;

	for (i = 0; i < count; i++) {
		spiWrite(color);
	}

	DISPLAY_DESELECT;
}

void glcdFillRect(u8 x1, u8 y1, u8 x2, u8 y2, u16 color) {
	// X- Direction
	const u16 writeCmd[6] = { 0xEF90, 0x0504, (u16) (0x0900
			+ x2), (u16) (0x0800 + x1), (u16) (0x0B00 + y2), (u16) (0x0A00 + y1) };
	u8 x;
	u8 y;

	DISPLAY_SELECT;
	DISPLAY_DATATYPE_CMD;

	spiWriteBuffer((u16*) writeCmd, 6);

	DISPLAY_DATATYPE_DATA;

	for (y = y1; y <= y2; y++) {
		for ( x = x1; x <= x2; x++) {
			spiWrite(color);
		}
	}

	DISPLAY_DESELECT;
}

void glcdDisplayInit(void) {
	DISPLAY_RESET_CLR;
	wait(50);
	DISPLAY_RESET_SET;
	wait(50);

	u8 i = 0;
	for(; i < 2; i++)
		sendCommand(INIT1[i]);
	wait(50);

	for(i = 0; i < 10; i++)
		sendCommand(INIT2[i]);
	wait(7);

	for(i = 0; i < 20; i++)
		sendCommand(INIT3[i]);
	wait(50);

	for(i = 0; i < 3; i++)
		sendCommand(INIT4[i]);

	wait(10);

	glcdFillScreen(RGB(0,0,0));
}
