#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//    int arr[7] = { 0 };
//    int i = 0;
//    while (scanf("%d", &arr[i]) != EOF)
//    {
//        int i = 0;
//        for (i = 1; i < 7; i++)
//        {
//            scanf("%d", &arr[i]);
//        }
//        int max = 0;
//        int min = 100;
//        for (i = 0; i < 7; i++)
//        {
//            if (arr[i] > max)
//            {
//                max = arr[i];
//            }
//            if (arr[i] < min)
//            {
//                min = arr[i];
//            }
//        }
//        int sum = 0;
//        for (i = 0; i < 7; i++)
//        {
//            sum += arr[i];
//        }
//        float average = (sum - max - min) / 5.0;
//        printf("%.2f\n", average);
//
//    }
//    return 0;
//}
//#include <stdio.h>
//void print(int a)
//{
//    if (a % 6 != 0)
//    {           
//        a /= 6;
//        print(a);
//    }
//    printf("%d", a % 6);
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    print(n);
//    return 0;
//}
//int main()
//{
//	int i = 0;
//	int a = 0;
//	for (i = 0; i < 9; i++)
//	{
//		a++;
//	}
//	printf("%d", i);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	if (i++ > 0)
//	{
//		int a = 0;
//	}
//	printf("%d", i);
//	return 0;
//}
//int main()
//{
//	char c = 0;
//	scanf("%c", &c);
//	int num = c - '0';
//	printf("%d\n", num);
//	return 0;
//}
//int main()
//{
//	int j = 0;
//	for (j = 0; j < 5; j++)
//	{
//		 j = 4;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < 2 * n - 2 * i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        for (i = 0; i < n + 1; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < 2 + 2 * i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < n - i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}