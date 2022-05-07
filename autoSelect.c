//"ÈË¹¤ÖÇÄÜ"


#include "autoSelect.h"

void autoSelect()
{
	int res = checkSelfWin();
	if (res == 1)
	{
		return;




	}


	res = checkOtherWin();
	if (res == 1)
	{
		return;
	}

	randSelect();



}



int checkSelfWin()
{
	int i = 0, j = 0;
	for ( i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			if (chessMap[i][j] == ' ')
			{
				chessMap[i][j] = 'o';
				if (checkWin(0) == 1)
				{

					gotoxy(4 * j + 2, 2 * i + 1);
					printf("%c\n", chessMap[i][j]);
					return 1;



				}
				chessMap[i][j] = ' ';


			}



		}



	}

	return 0;


}




int checkOtherWin()
{
	int i = 0, j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (chessMap[i][j] == ' ')
			{
				chessMap[i][j] = 'x';
				if (checkWin(1) == 1)
				{
					chessMap[i][j] = 'o';
					gotoxy(4 * j + 2, 2 * i + 1);
					printf("%c\n", chessMap[i][j]);
					return 1;



				}
				chessMap[i][j] = ' ';


			}



		}



	}

	return 0;


}






int randSelect()
{
	while (1)
	{
		int num = rand() % 9;
		int row = num / 3;
		int col = num % 3;
		if (chessMap[row][col] == ' ')
		{
			chessMap[row][col] = 'o';
			gotoxy(4 * col + 2, 2 * row + 1);
			printf("%c\n", chessMap[row][col]);
			break;




		}







	}

	return 0;


}



