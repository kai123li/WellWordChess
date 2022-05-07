#pragma once


#ifndef _INC_AUTOSELECT
#define _INC_AUTOSELECT


#include <stdio.h>
#include <conio.h>


#include "gotoxy.h"
#include "chessInfo.h"



void autoSelect();
int checkSelfWin();
int checkOtherWin();
int randSelect();

#endif // !_INC_AUTOSELECT

