//еп╤осно╥╫АйЬ

#include "isGameOver.h"


int isGameOver()
{
	int res = 1;
	int i = 0, j = 0;
	for ( i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			if (chessMap[i][j] == ' ')
			{
				res = 0;
				return res;


			}




		}




	}

	return res;

}