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
#include "rotary.h"
#include <stdio.h>

u8 applicationState = APP_STATE_MAIN;
u8 menuSelected = 0;

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

extern void clearScreenOnNextDraw();

void processUI(void) {
	int8_t rotary = readRotary();

	if (rotary > 0) {
		upPressed();
	} else if (rotary < 0) {
		downPressed();
	}

	static unsigned int last = 0;

	u8 lastPressed = fifo_get_nowait(&fifo);
	extern u8 redrawScreen;

	if(lastPressed == UI_CMD_ENTER) {
		if(applicationState == APP_STATE_MAIN) {
			applicationState = APP_STATE_MENU;
			clearScreenOnNextDraw();
		} else if(applicationState == APP_STATE_MENU) {
			if(menuSelected == 1) {
				applicationState = APP_STATE_MAIN;
				clearScreenOnNextDraw();
			}
		}
	} else if(lastPressed == UI_CMD_UP) {
		if(applicationState == APP_STATE_MENU) {
			if(menuSelected > 0) {
				menuSelected --;
			}
		}
	} else if(lastPressed == UI_CMD_DOWN) {
		if(applicationState == APP_STATE_MENU) {
			if(menuSelected < 1) {
				menuSelected++;
			}
		}
	}
}
