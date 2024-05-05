#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = a++;
//	int c = a++;
//	printf("%d %d %d ", a, b, c);
//	return 0;
//}
//int main()
//{
//	char a = 0;
//	char b = 0;
//	scanf("%c", &a);
//	scanf("%c", &b);
//	printf("%c", b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int k = 0;
//    scanf("%d", &k);
//    for (i = 0; i < k; i++)
//    {
//        char t = 0;
//        getchar();
//        scanf("%c", &t);
//        int a = 0;
//        int b = 0;
//        scanf("%d %d", &a, &b);
//        if (t == 'r')
//        {
//            int z = 0;
//            for (z = 0; z < m; z++)
//            {
//                int temp = arr[a-1][z];
//                arr[a-1][z] = arr[b-1][z];
//                arr[b-1][z] = temp;
//            }
//        }
//        else if (t == 'c')
//        {
//            int z = 0;
//            for (z = 0; z < n; z++)
//            {
//                int temp = arr[z][b-1];
//                arr[z][b-1] = arr[z][a-1];
//                arr[z][a-1] = temp;
//            }
//
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr[100] = { 0 };
//	int sum = 0;
//	int i = 0;
//	int temp = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &temp);
//		sum += temp;
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int min = sum;
//	int start = 0;
//	int over = 0;
//	for (i = 0; i < m; i++)
//	{
//		int j = 0;
//		for (j = i + 1; j <= m; j++)
//		{
//			int k = 0;
//			int sum2 = 0;
//			for (k = i; k <= j; k++)
//			{
//				sum2 += arr[k];
//			}
//			int differ = sum2 - sum;
//			if (differ < 0)
//			{
//				differ = -differ;
//			}
//			if (differ < min)
//			{
//				min = differ;
//				start = i;
//				over = j;
//			}
//		}
//	}
//	for (i = start; i <= over; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void move(char pos1, char pos2)
//{
//	printf("%c->%c ", pos1, pos2);
//}
//void hano(int n, char pos1, char pos2, char pos3)
//{
//	if (n == 1)
//	{
//		move(pos1, pos3);
//	}
//	else
//	{
//		hano(n - 1, pos1, pos3, pos2);
//		move(pos1, pos3);
//		hano(n - 1, pos2, pos1, pos3);
//	}
//}
//int main()
//{
//	int n = 0;
//	char pos1 = 'a';
//	char pos2 = 'b';
//	char pos3 = 'c';
//	scanf("%d", &n);
//	hano(n, pos1,pos2,pos3);
//	return 0;
//}
//void count1(int n,int* count)
//{
//	if (n == 1)
//	{
//		(*count)+=2;
//	}
//	else
//	{
//		count1(n - 1, count);
//		(*count)++;
//		count1(n - 1, count);
//		(*count)++;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	count1(n,&count);
//	printf("%d", count);
//	return 0;
//}
//void count1(int n, int* count)
//{
//	if (n == 1)
//	{
//		(*count) += 2;
//	}
//	else
//	{
//		count1(n - 1, count);
//		(*count)++;
//		count1(n - 1, count);
//		(*count)++;
//	}
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int count = 0;
//		count1(n, &count);
//		printf("%d\n", count);
//	}
//	return 0;
//}