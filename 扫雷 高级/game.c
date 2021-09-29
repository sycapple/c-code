#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
int num = 0;
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
FindMine(char count[ROWS][COLS], char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	int Flag = 0;
	while(win<row*col-EASY_COUNT)
	{
		printf("请输入想要排查的（ ）行（ ）列[ ]0.排雷 1.插旗子\n请输入：");
		scanf("%d%d%d", &x, &y,&Flag);
		if (x >= 1 && x <= row && y >= 1 && x <= col)
		{			
			if (Flag == 0)
			{
				if (mine[x][y] == '1')
				{
					printf("你妈炸了!\n");
					DisplayBoard(mine, ROW, COL);
					printf("排雷失败\n");
					break;
				}
				else
				{
					Auto(count, show, row, col, x, y);
					DisplayBoard(show, ROW, COL);
				}
			}
			else if (Flag == 1)
			{
				if (show[x][y] != 'x')
				{
					show[x][y] = 'X';
				}
				DisplayBoard(show, ROW, COL);
			}
			else
			{
				printf("输入错误\n");
			}
		}
		else
		{
			printf("超出雷区范围，请重新输入\n");
		}
		win = Win(mine, show, ROW, COL);
	}
	if(win== row * col - EASY_COUNT)
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
CountMine(char mine[ROWS][COLS], char count[ROWS][COLS], int row, int col)
{
	int x = 1;
	int y = 1;
	for (x = 1; x <= row;x++)
	{
		for (y = 1; y <= row; y++)
		{
			if (mine[x][y] == '0')
				count[x][y] = '0' + Scan(mine, ROW, COL, x, y);
			else
				count[x][y] = '*';

			
		}
	}
}
int Win(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 1;
	int y = 1;
	int num = 0;
	for (x = 1; x < row; x++)
	{
		for (y = 1; y < row; y++)
		{
			if (show[x][y] != '*'&& show[x][y] != 'X' && mine[x][y] == '0')
				num++;
        }

	}
	return num;
}

Auto(char count[ROWS][COLS],char show[ROWS][COLS],int row,int col, int x, int y)
{
	if (x >= 1 && x <= row && y >= 1 && y <= col)
	{
		if (count[x][y] == '0')
		{
			show[x][y] = count[x][y];
			if (show[x - 1][y] == '*')
				Auto(count, show, row, col, x - 1, y);
			if (show[x][y - 1] == '*')
				Auto(count, show, row, col, x, y - 1);
			if (show[x + 1][y] == '*')
				Auto(count, show, row, col, x + 1, y);
			if (show[x][y + 1] == '*')
				Auto(count, show, row, col, x, y + 1);
		}
		else
		{
			show[x][y] = count[x][y];
		}

	}
}

