

#include "writeHelp.h"

void writeHelp()
{
	printf("������Ͳ����Ҷ�˵�˰ɣ�\n");


	gotoxy(0, 15);
	printf("��k����\n");
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
	printf("��w��s����ѡ��jȷ��\n");



}


void writeP2MHelp()
{
	gotoxy(0, 15);
	printf("��w��s��a��d�����ϡ��¡�������ƶ���j����\n");



}


void writeP2PHelp()
{
	gotoxy(0, 15);
	printf("P1ִx����w��s��a��d�����ϡ��¡�������ƶ���j����\n");
	printf("P2ִo�����ϡ��¡�����ҽ����ƶ���enter����\n");


}