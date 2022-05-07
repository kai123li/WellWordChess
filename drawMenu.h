#pragma once



#ifndef _INC_DRAWMENU
#define _INC_DRAWMENU



#include <stdio.h>
#include "menuSelect.h"
#include "gotoxy.h"


void draw1stMenu();
void drawHighlight();
void drawHighlight1();
void drawHighlight2();
void drawHighlight3();
void drawHighlight4();
void drawHighlight5();
void drawHighlightAll(int yh);
void drawNoHighlight(int yh);
void drawPreDown();
void drawPreDown2();
void drawColorMenu();
void drawColorMenuHighlight(int leftSideStart, int rightSideStart);


#endif // !_INC_DRAWMENU
