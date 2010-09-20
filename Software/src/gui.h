/*
 * gui.h
 *
 *  Created on: Sep 18, 2010
 *      Author: irrenhaus
 */

#ifndef GUI_H
#define GUI_H

#include "stm32f10x.h"

typedef enum {
	ICON_MENU = 1,
	BUTTON_MENU = 2
} MenuTypeDef;

typedef struct {
	char  *buttonTitle;
	uint8_t			actionCommand;
	char  *buttonImage;

} MenuButtonDef;

typedef struct {
	MenuTypeDef		menuType;
	char		   *menuTitle;
	MenuButtonDef	menuButtons[16];
	uint8_t			menuButtonCount;
	uint8_t			hotButton;
} MenuDef;

void guiHandleInput(void);
void guiStartMenu(MenuDef *menu);
void guiDraw();

#endif /* GUI_H */
