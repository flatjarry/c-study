#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROW 9
#define COL 9
#define ROWS 11
#define COLS 11
#define EASY_COUNT 10
#include <time.h>
#include <stdlib.h>
void Initboard(char board[ROWS][COLS],int rows,int cols,char set );
void Displayboard(char board[ROWS][COLS], int row, int col);
void Setmine(char board[ROWS][COLS], int row, int col);
void Findmind(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);