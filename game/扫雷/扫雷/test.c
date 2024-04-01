#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("********************\n");
	printf("****   1.play   ****\n");
	printf("****   0.exit   ****\n");
	printf("********************\n");

}
void game()
{
	srand((unsigned int)time(NULL));
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	Initboard(mine, ROWS, COLS,'0');
	Initboard(show, ROWS, COLS,'*');
	Setmine(mine, ROW, COL);
	/*Displayboard(mine, ROW, COL);*/
	Displayboard(show, ROW, COL);
	Findmind(mine, show, ROW, COL);




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
			printf("ÍË³ö\n");
			break;
		default:
			printf("Ñ¡Ôñ´íÎó\n");
			break;
		}
	} while (input);

	return 0;
}