//���˶�ս


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
	printf("��Ϸ��ʼ!\n");

	while (1)
	{
		if (n % 2 == 0)
		{
			gotoxy(20, n + 1);
			printf("P2��\n");
			manualSelect2();

		}
		else
		{
			gotoxy(20, n + 1);
			printf("P1��\n");
			manualSelect();

		}


		int res = checkWin(n);
		if (res == 1)
		{
			gotoxy(20, n + 2);
			if (n % 2 == 1)
			{
				printf("P1Ӯ��!\n");
				gotoxy(20, n + 3);
				printf("��Ϸ����!\n");
				break;
			}
			printf("P2Ӯ!\n");
			gotoxy(20, n + 3);
			printf("��Ϸ����!\n");
			break;
		}


		res = isGameOver();
		if (res == 1)
		{
			gotoxy(20, n + 2);
			printf("ƽ��!\n");
			gotoxy(20, n + 3);
			printf("��Ϸ����!\n");
			break;
		}


		n++;




	}


	gotoxy(0, 18);
	printf("��j����һ�֣���k�������˵�\n");
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