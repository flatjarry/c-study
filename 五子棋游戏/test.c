#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("******************************\n");
	printf("**** 1.开始游戏 0.结束游戏****\n");
	printf("******************************\n");

}
void game()
{
	int ret = 0;
	char board[ROW][COL] = { 0 };
	Initboard(board,ROW,COL);
	Displayboard(board, ROW, COL);
	while (1)	
	{
		Playermove(board, ROW, COL);
	    ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Displayboard(board, ROW, COL);
		Computermove(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Displayboard(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	if (ret == '#')
	{
		printf("电脑赢\n");
	}
	if (ret == 'q')
	{
		printf("平局\n");
	}
	Displayboard(board, ROW, COL);
}
int main()
{
	int intput = 0;
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &intput);
		switch(intput)
		{
		case 1:
			game();
			break;
		case 0:
			printf("准备退出\n");
				break;
		default:
			printf("输入错误，请重新输入。\n");
		}
	} while (intput);
	return 0;
}