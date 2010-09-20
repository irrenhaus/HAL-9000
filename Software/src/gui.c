/*
 * gui.c
 *
 *  Created on: Sep 18, 2010
 *      Author: irrenhaus
 */

#include <stdlib.h>
#include "gui.h"
#include "lib/lcd/lcd.h"
#include "rotary.h"

MenuDef *curMenu = NULL;
u8 menuStateChanged = 0;

void drawMenu(MenuDef *menu);

void guiStartMenu(MenuDef *menu) {
	curMenu = menu;
	menuStateChanged = 1;
}

void guiDraw() {
	if (curMenu != NULL && menuStateChanged) {
		drawMenu(curMenu);
		menuStateChanged = 0;
	}
}

void guiHandleInput(void) {
	int8_t rotary = readRotary();

	if (rotary > 0) { //Up pressed
		if(curMenu != NULL) {
			if(curMenu->hotButton > 0)
				curMenu->hotButton--;
			else
				curMenu->hotButton = curMenu->menuButtonCount - 1;

			menuStateChanged = 1;
		}
	} else if (rotary < 0) { //Down pressed
		if(curMenu != NULL) {
			if(curMenu->hotButton < (curMenu->menuButtonCount - 1))
				curMenu->hotButton++;
			else
				curMenu->hotButton = 0;

			menuStateChanged = 1;
		}
	}
}

void drawMenu(MenuDef *menu) {
	if (menu->menuType == ICON_MENU) {
		if (menu->hotButton >= menu->menuButtonCount) {
			menu->hotButton = 0;
		}

		lcd_drawbmp(MENU_ICON_MENU_HOT_IMAGE, MENU_ICON_MENU_HOT_X - 4,
				MENU_ICON_MENU_HOT_Y - 4);
		lcd_drawbmp(menu->menuButtons[menu->hotButton].buttonImage,
				MENU_ICON_MENU_HOT_X, MENU_ICON_MENU_HOT_Y);

		//draw icons to top
		u8 i;
		int8_t icon = menu->hotButton;
		for (i = 1; i < 3; i++) {
			if ((icon - 1) < 0)
				icon = menu->menuButtonCount - 1;
			else
				icon--;

			u16 y = MENU_ICON_MENU_HOT_Y - (MENU_ICON_SIZE * i) - (i * 4);

			lcd_drawbmp(menu->menuButtons[icon].buttonImage,
					MENU_ICON_MENU_HOT_X, y);
		}

		//draw icons to bottom

		icon = menu->hotButton;
		for (i = 1; i < 3; i++) {
			if (icon + 1 >= menu->menuButtonCount)
				icon = 0;
			else
				icon++;

			u16 y = MENU_ICON_MENU_HOT_Y + (MENU_ICON_SIZE * i) + (i * 4);

			lcd_drawbmp(menu->menuButtons[icon].buttonImage,
					MENU_ICON_MENU_HOT_X, y);
		}
	}
}
