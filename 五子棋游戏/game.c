#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
				if (j < col - 1)
				{
					printf("|");
				}
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j<col-1)
				{
					printf("|");
				}
			}
			printf("\n");
		}

	}

}
void Playermove(char board[ROW][COL], int row, int col)
{
	srand((unsigned int)time(NULL));
	int x = 0;
	int y = 0;
	printf("玩家下棋\n");
	while (1)
	{
		printf("请输入坐标\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标已经输入，请重新输入\n");
			}
		}
		else
		{
			printf("坐标超出范围，请重新输入\n");
		}
	}
}
void Computermove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋\n");
	int x = 0;
	int y = 0;

	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;

		}
	}
}
int Isfull(char board[ROW][COL],int row,int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char Iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2]&&board[i][0]!=' ')
		{
			return board[i][0];
		}
	}
	int j = 0;
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j]&&board[0][j] != ' ')
		{
			return board[0][j];
		}
	}
	if (board[0][0] == board[2][2] && board[2][2] == board[3][3] || board[1][3] == board[2][2] && board[2][2] == board[3][1]&&board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (Isfull(board, row, col))
	{
		return 'q';
	}
	return 'C';
}