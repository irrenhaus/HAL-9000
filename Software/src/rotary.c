/*
 * rotary.c
 *
 *  Created on: Sep 12, 2010
 *      Author: irrenhaus
 */

#include "config.h"
#include "rotary.h"
#include "stm32f10x.h"
#include "ui.h"
#include "util.h"
#include "dbgMsg.h"
#include <stdio.h>

#define ROTARY_GPIO GPIOD
#define PHASE_A() (GPIO_ReadInputDataBit(ROTARY_GPIO, GPIO_Pin_11))
#define PHASE_B() (GPIO_ReadInputDataBit(ROTARY_GPIO, GPIO_Pin_12))

volatile int8_t enc_delta; // -128 ... 127
static int8_t last;

void initRotary(void) {
	int8_t new;

	new = 0;
	if (PHASE_A())
		new = 3;
	if (PHASE_B())
		new ^= 1; // convert gray to binary
	last = new; // power on state
	enc_delta = 0;
}

void updateRotary(void) {
	int8_t new, diff;

	new = 0;
	if (PHASE_A())
		new = 3;
	if (PHASE_B())
		new ^= 1; // convert gray to binary
	diff = last - new; // difference last - new
	if (diff & 1) { // bit 0 = value (1)
		last = new; // store new as next last
		enc_delta += (diff & 2) - 1; // bit 1 = direction (+/-)
	}
}

int8_t readRotary(void) // read two step encoders
{
	int8_t val;

	val = enc_delta;
	enc_delta = val & 1;

	return val >> 1;
}
