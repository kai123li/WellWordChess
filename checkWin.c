//ÅĞ¶ÏÊäÓ®

#include "checkWin.h"


int checkWin(int n)
{
	char ch = 'o';
	if (n%2 == 1)
	{
		ch = 'x';


	}



	int res = 0;
	if (chessMap[0][0] == ch && chessMap[0][1] == ch && chessMap[0][2] == ch )
	{
		res = 1;
	}
	else if (chessMap[1][0] == ch && chessMap[1][1] == ch && chessMap[1][2] == ch)
	{
		res = 1;
	}
	else if (chessMap[2][0] == ch && chessMap[2][1] == ch && chessMap[2][2] == ch)
	{
		res = 1;
	}



	else if (chessMap[0][0] == ch && chessMap[1][0] == ch && chessMap[2][0] == ch)
	{
		res = 1;
	}
	else if (chessMap[0][1] == ch && chessMap[1][1] == ch && chessMap[2][1] == ch)
	{
		res = 1;
	}
	else if (chessMap[0][2] == ch && chessMap[1][2] == ch && chessMap[2][2] == ch)
	{
		res = 1;
	}



	else if (chessMap[0][0] == ch && chessMap[1][1] == ch && chessMap[2][2] == ch)
	{
		res = 1;
	}
	else if (chessMap[0][2] == ch && chessMap[1][1] == ch && chessMap[2][0] == ch)
	{
		res = 1;
	}


	return res;












}