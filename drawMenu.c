//���˵�



#include "drawMenu.h"



void draw1stMenu()
{
	system("title ������С��Ϸ");
	system("mode con cols=50 lines=25");
	printf("=|=|=|=|=|=|=|=|=|=|=|=|=|=|=\n");
	printf("=========������С��Ϸ========\n");
	printf("||                         ||\n");
	printf("||    #1.�˻���ս          ||\n");
	printf("||    #2.���˶�ս          ||\n");
	printf("||    #3.����              ||\n");
	printf("||    #4.��������          ||\n");
	printf("||    #5.�˳�              ||\n");
	printf("||                         ||\n");
	printf("=|=|=|=|=|=|=|=|=|=|=|=|=|=|=\n");
	
	

	write1stMenuHelp();
	gotoxy(7, 3);
	//system("pause");


}


void drawHighlight()
{
	//system("cls");
	/*if (ya == 3)
	{
		drawHighlight1();
	}
	if (ya == 4)
	{
		drawHighlight2();
	}
	if (ya == 5)
	{
		
		drawHighlight3();
	}
	if (ya == 6)
	{
		
		drawHighlight4();
	}
	if (ya == 7)
	{
		drawHighlight5();
	}*/
	drawNoHighlight(ya - 1);

	drawHighlightAll(ya);

	drawNoHighlight(ya + 1);

	gotoxy(7, ya);


}

/*
void drawHighlight1()
{
	drawNoHighlight(ya - 1);
	
	drawHighlightAll(ya);
	
	drawNoHighlight(ya + 1);

	gotoxy(7, ya);
	//gotoxy(100, 100);


}


void drawHighlight2()
{
	system("cls");
	printf("=|=|=|=|=|=|=|=|=|=|=|=|=|=|=\n");
	printf("=========������С��Ϸ========\n");
	printf("||                         ||\n");
	printf("||    #1.�˻���ս          ||\n");
	printf("||  ->#2.���˶�ս<-        ||\n");
	printf("||    #3.����              ||\n");
	printf("||    #4.��������          ||\n");
	printf("||    #5.�˳�              ||\n");
	printf("||                         ||\n");
	printf("=|=|=|=|=|=|=|=|=|=|=|=|=|=|=\n");

	gotoxy(7, ya);
	//gotoxy(100, 100);


}


void drawHighlight3()
{
	system("cls");
	printf("=|=|=|=|=|=|=|=|=|=|=|=|=|=|=\n");
	printf("=========������С��Ϸ========\n");
	printf("||                         ||\n");
	printf("||    #1.�˻���ս          ||\n");
	printf("||    #2.���˶�ս          ||\n");
	printf("||  ->#3.����    <-        ||\n");
	printf("||    #4.��������          ||\n");
	printf("||    #5.�˳�              ||\n");
	printf("||                         ||\n");
	printf("=|=|=|=|=|=|=|=|=|=|=|=|=|=|=\n");

	gotoxy(7, ya);
	//gotoxy(100, 100);


}


void drawHighlight4()
{
	system("cls");
	printf("=|=|=|=|=|=|=|=|=|=|=|=|=|=|=\n");
	printf("=========������С��Ϸ========\n");
	printf("||                         ||\n");
	printf("||    #1.�˻���ս          ||\n");
	printf("||    #2.���˶�ս          ||\n");
	printf("||    #3.����              ||\n");
	printf("||  ->#4.��������<-        ||\n");
	printf("||    #5.�˳�              ||\n");
	printf("||                         ||\n");
	printf("=|=|=|=|=|=|=|=|=|=|=|=|=|=|=\n");

	gotoxy(7, ya);
	//gotoxy(100, 100);


}



void drawHighlight5()
{
	system("cls");
	printf("=|=|=|=|=|=|=|=|=|=|=|=|=|=|=\n");
	printf("=========������С��Ϸ========\n");
	printf("||                         ||\n");
	printf("||    #1.�˻���ս          ||\n");
	printf("||    #2.���˶�ս          ||\n");
	printf("||    #3.����              ||\n");
	printf("||    #4.��������          ||\n");
	printf("||  ->#5.�˳�    <-        ||\n");
	printf("||                         ||\n");
	printf("=|=|=|=|=|=|=|=|=|=|=|=|=|=|=\n");

	gotoxy(7, ya);
	//gotoxy(100, 100);


}

*/













void drawHighlightAll(int yh)
{
	
	if (yh == 3)
	{
		gotoxy(0, yh);
		printf("||  ->#1.�˻���ս<-        ||\n");
	}
	if (yh == 4)
	{
		printf("||  ->#2.���˶�ս<-        ||\n");
	}
	if (yh == 5)
	{
		gotoxy(0, yh);
		printf("||  ->#3.����    <-        ||\n");
	}
	if (yh == 6)
	{
		gotoxy(0, yh);
		printf("||  ->#4.��������<-        ||\n");
	}
	if (yh == 7)
	{
		gotoxy(0, yh);
		printf("||  ->#5.�˳�    <-        ||\n");

	}


}



void drawNoHighlight(int yh)
{
	if (yh == 2 || yh == 8)
	{
		gotoxy(0, yh);
		printf("||                         ||\n");

	}
	if (yh == 3)
	{
		gotoxy(0, yh);
		printf("||    #1.�˻���ս          ||\n");
	}
	if (yh == 4)
	{
		gotoxy(0, yh);
		printf("||    #2.���˶�ս          ||\n");
	}
	if (yh == 5)
	{
		gotoxy(0, yh);
		printf("||    #3.����              ||\n");
	}
	if (yh == 6)
	{
		gotoxy(0, yh);
		printf("||    #4.��������          ||\n");
	}
	if (yh == 7)
	{
		gotoxy(0, yh);
		printf("||    #5.�˳�              ||\n");

	}


}



void drawPreDown()
{
	/*if (n % 2 == 0)
	{
		gotoxy(20, n + 1);
		printf("��������\n");
		autoSelect();

	}
	else
	{
		gotoxy(20, n + 1);
		printf("����\n");
		manualSelect();

	}*/
	
	gotoxy(x - 1, y);
	printf(">\n");
	gotoxy(x + 1, y);
	printf("<\n");

	while (1)
	{
		int res = kbhit();
		if (res > 0)
		{
			gotoxy(x - 1, y);
			printf(" \n");
			gotoxy(x + 1, y);
			printf(" \n");
			return;

		}
	}
		
		


	
	


}


void drawPreDown2()
{
	/*if (n % 2 == 0)
	{
		gotoxy(20, n + 1);
		printf("��������\n");
		autoSelect();

	}
	else
	{
		gotoxy(20, n + 1);
		printf("����\n");
		manualSelect();

	}*/

	gotoxy(x - 1, y);
	printf(")\n");
	gotoxy(x + 1, y);
	printf("(\n");

	while (1)
	{
		int res = kbhit();
		if (res > 0)
		{
			gotoxy(x - 1, y);
			printf(" \n");
			gotoxy(x + 1, y);
			printf(" \n");
			return;

		}
	}

}





void drawColorMenu()
{
	
	printf("=|=|=|=|=|=|=|=|=|=|=|=|=|=|=\n");
	printf("=========�����������========\n");
	printf("||                         ||\n");
	printf("||    #1.��                ||\n");
	printf("||    #2.��                ||\n");
	printf("||    #3.��                ||\n");
	printf("||    #4.��                ||\n");
	printf("||    #5.ˮī              ||\n");
	printf("||    #6.����              ||\n");
	printf("||    #7.����              ||\n");
	printf("||                         ||\n");
	printf("=|=|=|=|=|=|=|=|=|=|=|=|=|=|=\n");

	write1stMenuHelp();
	gotoxy(7, 3);
	//system("pause");


}



void drawColorMenuHighlight(int leftSideStart, int rightSideStart)
{
	gotoxy(leftSideStart, ya);
	printf("->\n");
	gotoxy(rightSideStart, ya);
	printf("<-\n");
	gotoxy(7, ya);

	while (1)
	{
		int res = kbhit();
		if (res > 0)
		{
			gotoxy(leftSideStart, ya);
			printf("  \n");
			gotoxy(rightSideStart, ya);
			printf("  \n");
			gotoxy(7, ya);
			return;

		}
	}
	



}