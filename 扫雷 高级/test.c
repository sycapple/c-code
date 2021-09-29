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
	char count[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	InitBoard(count, ROWS, COLS, '0');
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//打印
	//printf("雷区\n");
	//DisplayBoard(mine, ROW, COL);
	//为所有的格子标注九宫格雷数
	CountMine(mine, count, ROW, COL);
	printf("个数\n");
	//DisplayBoard(count, ROW, COL);

	//扫雷!
	FindMine(count,mine, show, ROW, COL);


}
void test()
{
	srand((unsigned int)time(NULL));
	int input=0;
	do 
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入有误，请重新输入\n");
			break;
		}
	} while (input);
	
}
int main()
{
	test();
}
