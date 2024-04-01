#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
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
			int		j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
	}
		printf("\n");
	}
}
int full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] != ' ')
			{
				return 1;
			}
		}
	}
	return 0;
}
void Playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家下棋\n");
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
				printf("此处已下，请重新下\n");
			}
		}
		else
		{
			printf("超出范围，请重下\n");
		}
	}
}
void Computermove(char board[ROW][COL], int row, int col)
{
	srand((unsigned int)time(NULL));
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
char Iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row ; i++)
	{
		int j = 0;
		for (j = 0; j < col - 1; j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j] != ' ')
			{
				return board[i][j];
			}
		}
	}
	int j = 0;
     for (j = 0; j < col; j++)
	{
		int i = 0;
		for (i = 0; i < row - 1; i++)
		{
			if (board[i][j] == board[i+1][j] && board[i][j] != ' ')
			{
				return board[i][j];
			}
		}
	}
	 if (full(board,row,col))
	 {
		 return 'c';
	 }
	 else
	 {
		 return 'q';
	 }
}
