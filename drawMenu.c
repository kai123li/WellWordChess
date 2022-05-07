//画菜单



#include "drawMenu.h"



void draw1stMenu()
{
	system("title 井字棋小游戏");
	system("mode con cols=50 lines=25");
	printf("=|=|=|=|=|=|=|=|=|=|=|=|=|=|=\n");
	printf("=========井字棋小游戏========\n");
	printf("||                         ||\n");
	printf("||    #1.人机对战          ||\n");
	printf("||    #2.人人对战          ||\n");
	printf("||    #3.帮助              ||\n");
	printf("||    #4.背景设置          ||\n");
	printf("||    #5.退出              ||\n");
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
	printf("=========井字棋小游戏========\n");
	printf("||                         ||\n");
	printf("||    #1.人机对战          ||\n");
	printf("||  ->#2.人人对战<-        ||\n");
	printf("||    #3.帮助              ||\n");
	printf("||    #4.背景设置          ||\n");
	printf("||    #5.退出              ||\n");
	printf("||                         ||\n");
	printf("=|=|=|=|=|=|=|=|=|=|=|=|=|=|=\n");

	gotoxy(7, ya);
	//gotoxy(100, 100);


}


void drawHighlight3()
{
	system("cls");
	printf("=|=|=|=|=|=|=|=|=|=|=|=|=|=|=\n");
	printf("=========井字棋小游戏========\n");
	printf("||                         ||\n");
	printf("||    #1.人机对战          ||\n");
	printf("||    #2.人人对战          ||\n");
	printf("||  ->#3.帮助    <-        ||\n");
	printf("||    #4.背景设置          ||\n");
	printf("||    #5.退出              ||\n");
	printf("||                         ||\n");
	printf("=|=|=|=|=|=|=|=|=|=|=|=|=|=|=\n");

	gotoxy(7, ya);
	//gotoxy(100, 100);


}


void drawHighlight4()
{
	system("cls");
	printf("=|=|=|=|=|=|=|=|=|=|=|=|=|=|=\n");
	printf("=========井字棋小游戏========\n");
	printf("||                         ||\n");
	printf("||    #1.人机对战          ||\n");
	printf("||    #2.人人对战          ||\n");
	printf("||    #3.帮助              ||\n");
	printf("||  ->#4.背景设置<-        ||\n");
	printf("||    #5.退出              ||\n");
	printf("||                         ||\n");
	printf("=|=|=|=|=|=|=|=|=|=|=|=|=|=|=\n");

	gotoxy(7, ya);
	//gotoxy(100, 100);


}



void drawHighlight5()
{
	system("cls");
	printf("=|=|=|=|=|=|=|=|=|=|=|=|=|=|=\n");
	printf("=========井字棋小游戏========\n");
	printf("||                         ||\n");
	printf("||    #1.人机对战          ||\n");
	printf("||    #2.人人对战          ||\n");
	printf("||    #3.帮助              ||\n");
	printf("||    #4.背景设置          ||\n");
	printf("||  ->#5.退出    <-        ||\n");
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
		printf("||  ->#1.人机对战<-        ||\n");
	}
	if (yh == 4)
	{
		printf("||  ->#2.人人对战<-        ||\n");
	}
	if (yh == 5)
	{
		gotoxy(0, yh);
		printf("||  ->#3.帮助    <-        ||\n");
	}
	if (yh == 6)
	{
		gotoxy(0, yh);
		printf("||  ->#4.背景设置<-        ||\n");
	}
	if (yh == 7)
	{
		gotoxy(0, yh);
		printf("||  ->#5.退出    <-        ||\n");

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
		printf("||    #1.人机对战          ||\n");
	}
	if (yh == 4)
	{
		gotoxy(0, yh);
		printf("||    #2.人人对战          ||\n");
	}
	if (yh == 5)
	{
		gotoxy(0, yh);
		printf("||    #3.帮助              ||\n");
	}
	if (yh == 6)
	{
		gotoxy(0, yh);
		printf("||    #4.背景设置          ||\n");
	}
	if (yh == 7)
	{
		gotoxy(0, yh);
		printf("||    #5.退出              ||\n");

	}


}



void drawPreDown()
{
	/*if (n % 2 == 0)
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
		printf("机器人下\n");
		autoSelect();

	}
	else
	{
		gotoxy(20, n + 1);
		printf("你下\n");
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
	printf("=========试试新主题吧========\n");
	printf("||                         ||\n");
	printf("||    #1.春                ||\n");
	printf("||    #2.夏                ||\n");
	printf("||    #3.秋                ||\n");
	printf("||    #4.冬                ||\n");
	printf("||    #5.水墨              ||\n");
	printf("||    #6.经典              ||\n");
	printf("||    #7.返回              ||\n");
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