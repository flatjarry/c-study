#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void hanoi(int n, char pos1, char pos2, char  pos3)
//{
//	if (n == 1)
//	{
//		printf(" %c->%c ", pos1, pos3);
//	}
//	else
//	{
//		hanoi(n - 1, pos1, pos3, pos2);
//		printf(" %c->%c", pos1, pos3);
//		hanoi(n - 1, pos2, pos1, pos3);
//	}
//}
//int main()
//{
//	hanoi(3,'a', 'b', 'c');
//	return 0;
//}
//void move(char pos1, char pos2)
//{
//	printf(" %c->%c ", pos1, pos2);
//}
//void hanoi(int n, char pos1, char pos2, char pos3)
//{
//	if (n == 1)
//	{
//		move(pos1, pos3);
//	}
//	else
//	{
//		hanoi(n - 1, pos1, pos3, pos2);
//		move(pos1, pos3);
//		hanoi(n - 1, pos2, pos1, pos3);
//	}
//}
//int main()
//{
//	hanoi(3, 'a', 'b', 'c');
//	printf("\n");
//	hanoi(1, 'a', 'b', 'c');
//	return 0;
//}
//void move (char pos1,char pos2)
//{
//	printf(" %c->%c ",pos1,pos2);
//}
//void hanoi(int n, char pos1, char pos2, char pos3)
//{
//	if (n == 1)
//	{
//		move(pos1, pos3);
//	}
//	else
//	{
//		hanoi(n - 1, pos1, pos3,pos2);
//		move(pos1, pos3);
//		hanoi(n - 1, pos2, pos1, pos3);
//	}
//}
//int main()
//{
//	hanoi(4, 'a', 'b', 'c');
//	return 0;
//}
//#include <stdio.h>
//
//int MiniStep(int x);
//
//int main(void)
//{
//    int n, ans;
//
//    while (scanf("%d", &n) != -1)
//    {
//
//
//        ans = MiniStep(n);
//
//        printf("%d\n", ans);
//    }
//
//    return 0;
//
//}
//
//int MiniStep(int x)
//{
//    int jackpot;
//    if (x == 1)
//        jackpot = 2;
//    else
//        jackpot = MiniStep(x - 1) * 3 + 2;
//
//    return jackpot;
//
//}
//void move(char pos1, char pos2,int* count)
//{
//	printf(" %c->%c", pos1, pos2);
//	(*count)++;
//}
//void hanoi(int n, char pos1, char pos2, char pos3,int* count)
//{
//	if (n == 1)
//	{
//		move(pos1, pos2,count);
//		move(pos2, pos3,count);
//	}
//	else
//	{
//		hanoi(n - 1, pos1,pos2,pos3,count);
//		move(pos1, pos2,count);
//		hanoi(n-1, pos3, pos2, pos1,count);
//		move(pos2, pos3,count);
//		hanoi(n - 1, pos1, pos2, pos3,count);
//	}
//}
//int main()
//{
//	int count = 0;
//	hanoi(4, 'a', 'b', 'c',&count);
//	printf("%d", count);
//	return 0;
//}
//void hanoi(int n, char pos1, char pos2, char pos3, int* count)
//{
//	if (n == 1)
//	{
//		(*count) += 1;
//	}
//	else
//	{
//		hanoi(n - 1, pos1, pos3, pos2, count);
//		(*count)++;
//		hanoi(n - 1, pos2, pos1, pos3, count);
//	}
//}
//int main()
//{
//	int count = 0;
//	hanoi(3,&count);
//	printf("%d", count);
////}
//int fib(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n == 2)
//	{
//		return 2;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}
//long long sum(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * sum(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long long ret = sum(n);
//	printf("%lld", ret);
//}
//void sum(int n)
//{
//	long long add = 0;
//	if (n == 1)
//	{
//		add *= 1;
//	}
//	else
//	{
//		add = n * (sum(n - 1));
//	}
//	printf("%lld", add);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	 sum(n);
//	return 0;
//}