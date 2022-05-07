#pragma once


#ifndef _INC_MOVECURSOR
#define _INC_MOVECURSOR



#include <stdio.h>

#pragma warning (disable : 4996)
#include <conio.h>
#include "gotoxy.h"

#include "manualSelect.h"


char moveCursor();
char moveCursor2();

void goUp();
void goDown();
void goLeft();
void goRight();

#endif // !_INC_MOVECURSOR
