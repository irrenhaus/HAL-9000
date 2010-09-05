/*
 * spidriver.c
 *
 *  Created on: Aug 26, 2010
 *      Author: irrenhaus
 */
#include "spidriver.h"
#include "stm32f10x.h"
#include "util.h"

void SPI_driver_send_byte(u8 cmd) {
	SPI_I2S_SendData(SPI1, cmd);
	while (SPI_I2S_GetFlagStatus(SPI1, SPI_I2S_FLAG_TXE) == RESET)
		;
}

void SPI_driver_send_word(u16 cmd) {
	SPI_I2S_SendData(SPI1, cmd);
	while (SPI_I2S_GetFlagStatus(SPI1, SPI_I2S_FLAG_TXE) == RESET)
		;
}
