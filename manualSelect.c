//ÏÂÆå

#include "manualSelect.h"

x = 6;
y = 3;


void manualSelect()
{
	gotoxy(x, y);
	while (1)
	{
		char ch = moveCursor();
		if ( ch == 'j' || ch == 'J')
		{
			int row = (y - 1) / 2;
			int col = (x - 2) / 4;
			if ( chessMap[row][col] == ' ')
			{
				chessMap[row][col] = 'x';
				gotoxy(4 * col + 2, 2 * row + 1);
				printf("%c\n", chessMap[row][col]);
				break;

				

			}




		}




	}





}



void manualSelect2()
{
	gotoxy(x, y);
	while (1)
	{
		char ch = moveCursor2();
		if (ch == 13)			//EnterµÄansiiÊÇ13
		{
			int row = (y - 1) / 2;
			int col = (x - 2) / 4;
			if (chessMap[row][col] == ' ')
			{
				chessMap[row][col] = 'o';
				gotoxy(4 * col + 2, 2 * row + 1);
				printf("%c\n", chessMap[row][col]);
				break;



			}




		}




	}





}

