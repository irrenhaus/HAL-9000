/*
 * ui.h
 *
 *  Created on: Sep 10, 2010
 *      Author: irrenhaus
 */

#ifndef UI_H_
#define UI_H_

#define UI_CMD_ENTER 1
#define UI_CMD_UP 2
#define UI_CMD_DOWN 3

void initUI(void);

void enterPressed(void);
void upPressed(void);
void downPressed(void);

void processUI(void);

#endif /* UI_H_ */
