#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("#########################################################\n");
	printf("##################                      #################\n");
	printf("##################   1.Play     2.Exit  #################\n");
	printf("##################                      #################\n");
	printf("#########################################################\n");


}  
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//��ӡ
	DisplayBoard(mine, ROW, COL);
	//ɨ��!
	FindMine(mine, show, ROW, COL);

}
void test()
{
	srand((unsigned int)time(NULL));
	int input=0;
	do 
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������������������\n");
			break;
		}
	} while (input);
	
}
int main()
{
	test();
}
