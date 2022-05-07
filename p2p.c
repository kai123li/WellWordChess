//人人对战


#include "p2p.h"


void p2p()
{

	drawChessBoard();
	initChessBoard();
	writeP2PHelp();


	srand(time(0));
	//srand(1);
	int n = rand() % 2;

	gotoxy(20, 0);
	printf("游戏开始!\n");

	while (1)
	{
		if (n % 2 == 0)
		{
			gotoxy(20, n + 1);
			printf("P2下\n");
			manualSelect2();

		}
		else
		{
			gotoxy(20, n + 1);
			printf("P1下\n");
			manualSelect();

		}


		int res = checkWin(n);
		if (res == 1)
		{
			gotoxy(20, n + 2);
			if (n % 2 == 1)
			{
				printf("P1赢了!\n");
				gotoxy(20, n + 3);
				printf("游戏结束!\n");
				break;
			}
			printf("P2赢!\n");
			gotoxy(20, n + 3);
			printf("游戏结束!\n");
			break;
		}


		res = isGameOver();
		if (res == 1)
		{
			gotoxy(20, n + 2);
			printf("平局!\n");
			gotoxy(20, n + 3);
			printf("游戏结束!\n");
			break;
		}


		n++;




	}


	gotoxy(0, 18);
	printf("按j再来一局，按k返回主菜单\n");
	while (1)
	{
		int res = kbhit();
		if (res > 0)
		{
			char ch = getch();
			if (ch == 'j' || ch == 'J')
			{
				system("cls");
				p2p();
				return;
			}
			else if (ch == 'k' || ch == 'K')
			{
				draw1stMenu();
				gotoxy(7, ya);
				return;
			}
		}
	}







}