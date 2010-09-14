/*
 * ui.c
 *
 *  Created on: Sep 10, 2010
 *      Author: irrenhaus
 */

#include "ui.h"
#include "fifo.h"
#include "util.h"
#include "dbgMsg.h"
#include <stdio.h>

fifo_t fifo;
u8 buffer[32];

void initUI(void) {
	fifo_init(&fifo, buffer, 32);
}

void enterPressed(void) {
	fifo_put(&fifo, UI_CMD_ENTER);
}

void upPressed(void) {
	fifo_put(&fifo, UI_CMD_UP);
}

void downPressed(void) {
	fifo_put(&fifo, UI_CMD_DOWN);
}

void processUI(void) {
	static unsigned int last = 0;

	//if(SysTickCounter - last > 1500) {
		last = SysTickCounter;
		sprintf(dbgMessage, "UI: %d", fifo_get_wait(&fifo));
	//}
}