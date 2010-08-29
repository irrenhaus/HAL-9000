/*
 * util.c
 *
 *  Created on: Aug 26, 2010
 *      Author: irrenhaus
 */
#include "util.h"
#include "../FreeRTOS/FreeRTOS.h"
#include "../FreeRTOS/task.h"

void delay_ms(int ms) {
	vTaskDelay(ms / portTICK_RATE_MS);
}
