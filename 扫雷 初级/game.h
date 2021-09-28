#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 80
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
InitBoard(char board[ROWS][COLS], int rows, int clos,char a);
DisplayBoard(char board[ROWS][COLS], int row, int clo);
SetMine(char board[ROWS][COLS], int row, int col);
FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int Scan(char mine[ROWS][COLS], int row, int col);