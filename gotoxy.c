//�ƶ����ĺ���


#include "gotoxy.h"



void gotoxy(short x, short y) {
	COORD coord = { x, y };
	//COORD��Windows API�ж����һ�ֽṹ�����ͣ���ʾ����̨��Ļ�ϵ����ꡣ
	//��������Ƕ�����COORD���͵ı���coord�������β�x��y���г�ʼ����
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	//GetStdHandle(STD_OUTPUT_HANDLE); ��ȡ����̨������
	//Ȼ����SetConsoleCursorPosition���ÿ���̨(cmd)���λ��
}
