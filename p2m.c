//人机对战


#include "p2m.h"


void p2m()
{

	drawChessBoard();
	initChessBoard();
	writeP2MHelp();

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
			printf("机器人下\n");
			autoSelect();

		}
		else
		{
			gotoxy(20, n + 1);
			printf("你下\n");
			manualSelect();

		}


		int res = checkWin(n);
		if (res == 1)
		{
			gotoxy(20, n + 2);
			if (n % 2 == 1)
			{
				printf("你赢了!\n");
				gotoxy(20, n + 3);
				printf("游戏结束!\n");
				break;
			}
			printf("机器人赢!\n");
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
				p2m();
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