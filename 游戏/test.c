#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
#include <string.h>
void meun()
{
	printf("******************************************\n");
	printf("************  1.Play 0.exit  *************\n");
	printf("******************************************\n");

}
void game()
{
	char ret = '0';
	int i, j;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);//��ʼ��
	DisplayBoard(board, ROW, COL);//��ӡ����
	while (1)
	{
		//�������
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);//��ӡ����
		ret = Judge(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);//��ӡ����
		ret = Judge(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���ʤ��\n");
	}
	else if(ret=='#')
	{
		printf("����ʤ��\n");
	}
	else
	{
		printf("ƽ�֣�\n");
	}

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		meun();
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
			printf("�������\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}