#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}//计算个位数为9的数量
//		if (i / 10 == 9)
//		{
//			count++;
//		}//计算十位数为9的数量
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0)
//		{
//			count++;
//		}
//		if (i % 100 == 0 && i % 400 != 0)
//		{
//			count--;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	while (b != 0)
	{
		int bet = a;
		b = a % b;
		a = bet;
	}
	printf("%d", a);
	return 0;
}