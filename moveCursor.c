//移动光标

#include "moveCursor.h"


char moveCursor()
{
	int res = kbhit();
	if (res > 0)
	{
		char ch = getch();
		if (ch == 'w' || ch == 'W')
		{
			goUp();
			drawPreDown();
		}
		else if (ch == 's' || ch == 'S')
		{
			goDown();
			drawPreDown();
		}
		else if (ch == 'd' || ch == 'D')
		{
			goRight();
			drawPreDown();
		}
		else if (ch == 'a' || ch == 'A')
		{
			goLeft();
			drawPreDown();
		}
		else if (ch == 'j' || ch == 'J')
		{
			
		}

		return ch;




	}

	return ' ';



}


//switch (key)
//		{   //左  
//		case 75:  Snake[0].now = 0;
//			break;
//			//右  
//		case 77:  Snake[0].now = 1;
//			break;
//			//上  
//		case 72:  Snake[0].now = 2;
//			break;
//			//下  
//		case 80:  Snake[0].now = 3;
//			break;
//		}


char moveCursor2()
{
	int res = kbhit();
	if (res > 0)
	{
		char ch = getch();
		if (ch == 72)
		{
			goUp();
			drawPreDown2();
		}
		else if (ch == 80)
		{
			goDown();
			drawPreDown2();
		}
		else if (ch == 77)
		{
			goRight();
			drawPreDown2();
		}
		else if (ch == 75)
		{
			goLeft();
			drawPreDown2();
		}
		else if (ch == 13)
		{

		}

		return ch;




	}

	return ' ';



}





void goUp()
{
	if (y == 1)
	{
		return;
	}

	y -= 2;
	gotoxy(x, y);

}


void goDown()
{
	if (y == 5)
	{
		return;
	}

	y += 2;
	gotoxy(x, y);

}


void goLeft()
{
	if (x == 2)
	{
		return;
	}

	x -= 4;
	gotoxy(x, y);

}


void goRight()
{
	if (x == 10)
	{
		return;
	}

	x += 4;
	gotoxy(x, y);

}