//菜单选择


#include "menuSelect.h"



xa = 7;
ya = 3;


void menuSelect()
{
	gotoxy(xa, ya);
	while (1)
	{
		
		char ch = moveMenuCursor();
		
		if (ch == 'j' || ch == 'J')
		{
			system("cls");
			if (ya == 3)
			{
				p2m();
			}
			if (ya == 4)
			{
				p2p();
			}
			if (ya == 5)
			{
				writeHelp();
				
			}
			if (ya == 6)
			{
				changeColor();
				//printf("还在施工，敬请期待！");
			}
			if (ya == 7)
			{
				exit(0);
			}

			

		}

	}

}

void menuColorSelect()
{
	xa = 7;
	ya = 3;
	gotoxy(xa, ya);
	while (1)
	{

		char ch = moveMenuColorCursor();

		if (ch == 'j' || ch == 'J')
		{
			
			if (ya == 3)
			{
				system("color B4");
			}
			if (ya == 4)
			{
				system("color E0");
			}
			if (ya == 5)
			{
				system("color 7C");

			}
			if (ya == 6)
			{
				system("color F9");
			}
			if (ya == 7)
			{
				system("color 70");
			}
			if (ya == 8)
			{
				system("color 07");
			}
			if (ya == 9)
			{
				draw1stMenu();
				ya = 3;
				return;
			}



		}

	}

}

char moveMenuColorCursor()
{
	int res = kbhit();
	if (res > 0)
	{
		char ch = getch();
		if (ch == 'w' || ch == 'W')
		{
			goMenuColorUp();
			drawColorMenuHighlight(4, 17);
		}
		else if (ch == 's' || ch == 'S')
		{
			goMenuColorDown();
			drawColorMenuHighlight(4, 17);
		}
		/*else if (ch == 'd')
		{
			goRight();
		}
		else if (ch == 'a')
		{
			goLeft();
		}*/
		else if (ch == 'j' || ch == 'J')
		{

		}

		return ch;




	}

	return ' ';



}


char moveMenuCursor()
{
	int res = kbhit();
	if (res > 0)
	{
		char ch = getch();
		if (ch == 'w' || ch == 'W')
		{
			goMenuUp();
			drawHighlight();
		}
		else if (ch == 's' || ch == 'S')
		{
			goMenuDown();
			drawHighlight();
		}
		/*else if (ch == 'd')
		{
			goRight();
		}
		else if (ch == 'a')
		{
			goLeft();
		}*/
		else if (ch == 'j' || ch == 'J')
		{

		}

		return ch;




	}

	return ' ';



}


void goMenuUp()
{
	if (ya == 3)
	{
		return;
	}

	ya -= 1;
	gotoxy(xa, ya);

}


void goMenuDown()
{
	if (ya == 7)
	{
		return;
	}

	ya += 1;
	gotoxy(xa, ya);

}

void goMenuColorUp()
{
	if (ya == 3)
	{
		return;
	}

	ya -= 1;
	gotoxy(xa, ya);

}


void goMenuColorDown()
{
	if (ya == 9)
	{
		return;
	}

	ya += 1;
	gotoxy(xa, ya);

}


//
//void goLeft()
//{
//	if (x == 2)
//	{
//		return;
//	}
//
//	x -= 4;
//	gotoxy(x, y);
//
//}
//
//
//void goRight()
//{
//	if (x == 10)
//	{
//		return;
//	}
//
//	x += 4;
//	gotoxy(x, y);
//
//}