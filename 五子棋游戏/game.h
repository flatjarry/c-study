#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROW 3
#define COL 3
void Initboard(char board[ROW][COL], int row, int col); 
void Displayboard(char board[ROW][COL], int row, int col);
void Playermove(char boaed[ROW][COL], int row, int col);
void Computermove(char boaed[ROW][COL], int row, int col);
#include <stdlib.h>
#include <time.h>
char Iswin(char boaed[ROW][COL], int row, int col);
