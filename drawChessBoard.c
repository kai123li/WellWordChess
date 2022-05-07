//ª≠∆Â≈Ã




#include "drawChessBoard.h"


void drawRow(int i)
{
	int j;
	for (j = 0; j < 13; j++)
	{
		gotoxy(j, 2 * i);
		printf("-\n");
	}
}


void drawCol(int i)
{
	int j;
	for (j = 0; j < 5; j++)
	{
		gotoxy(4 * i, j + 1);
		printf("|\n");
	}
}


void drawChessBoard()
{
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		drawRow(i);
	}
	for (i = 0; i < 4; i++)
	{
		drawCol(i);
	}

	printf("\n");
}
