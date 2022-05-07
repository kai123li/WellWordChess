

#include "writeHelp.h"

void writeHelp()
{
	printf("井字棋就不用我多说了吧！\n");


	gotoxy(0, 15);
	printf("按k返回\n");
	while (1)
	{
		int res = kbhit();
		if (res > 0)
		{
			char ch = getch();

			if (ch == 'k' || ch == 'K')
			{
				draw1stMenu();
				gotoxy(7, ya);
				return;
			}
		}
	}

}



void write1stMenuHelp()
{
	gotoxy(0, 15);
	printf("按w和s上下选择，j确定\n");



}


void writeP2MHelp()
{
	gotoxy(0, 15);
	printf("按w、s、a和d进行上、下、左和右移动，j下棋\n");



}


void writeP2PHelp()
{
	gotoxy(0, 15);
	printf("P1执x，按w、s、a和d进行上、下、左和右移动，j下棋\n");
	printf("P2执o，按上、下、左和右进行移动，enter下棋\n");


}