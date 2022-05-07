#pragma once



#ifndef _INC_MENUSELECT
#define _INC_MENUSELECT

#include <stdio.h>
#include "gotoxy.h"
#pragma warning (disable : 4996)
#include <conio.h>
#include "p2m.h"
#include "p2p.h"
#include "writeHelp.h"


void menuSelect();
void menuColorSelect();
char moveMenuCursor();
char moveMenuColorCursor();
void goMenuUp();
void goMenuColorUp();
void goMenuDown();
void goMenuColorDown();
int xa, ya;


#endif // !_INC_MENUSELECT


