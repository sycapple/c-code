#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
InitBoard(char board[ROWS][COLS], int rows, int clos,char a)
{
	int x = 0;
	int y = 0; 
	for (x=0;x<rows;x++)
	{
		for (y = 0; y < clos; y++)
		{
			board[x][y] = a;
		}

	}
}
DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	for (x = 0; x <= col; x++)
	{
		printf("%d ", x);
	}
	printf("\n");
	for (x = 1; x <= row; x++)
	{
		printf("%d ", x);
		for (y = 1; y <= col; y++)
		{
			printf("%c ", board[x][y]);
		}
		printf("\n");
	}
}
SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	for (; count > 0;)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int num = 0;
	int win = 0;
	printf("请输入想要排查的（ ）行（ ）列\n");
	while(win<row*col-EASY_COUNT)
	{
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && x <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("你妈炸了!\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				num=Scan(mine, ROW, COL,x,y);
				show[x][y] = num + '0';
				win++;
				DisplayBoard(show, ROW, COL);
			}
		}
		else
		{
			printf("超出雷区范围，请重新输入\n");
		}
	}
	if(win= row * col - EASY_COUNT)
	{
		printf("排雷成功！\n");
	}
}
int Scan(char mine[ROWS][COLS], int row, int col,int x,int y)
{
	{
		int i = 0;
		int j = 0;
		int count = 0;
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (mine[x - 1 + i][y - 1 + j] == '1')
					count++;
			}
		}
		return count;
	}//方案一
	{
		 
	}
}