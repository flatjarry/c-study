#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("******************************\n");
	printf("**** 1.开始游戏 0.结束游戏****\n");
	printf("******************************\n");
	printf("请输入\n");	
}
void game()
{
	int ret = 0;
	char board[ROW][COL] = { 0 };
	Initboard(board, ROW, COL);
	Displayboard(board, ROW, COL);
	while (1)
	{
		Playermove(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		Displayboard(board, ROW, COL);
		Computermove(board, ROW, COL);
		Iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		Displayboard(board, ROW, COL);

}
	if (ret = '*')
	{
		printf("玩家赢\n");
	}
	else if (ret = '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
	Displayboard(board, ROW, COL);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}