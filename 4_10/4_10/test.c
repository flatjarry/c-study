#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//struct peo
//{
//	char name[20];
//};
//int main()
//{
//	struct peo a = { "ÕÅÈý" };
//	printf("%s", a.name);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int arr[4] = { 0 };
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        scanf("%1d", &arr[i]);
//    }
//    for (i = 0; i < 4; i++)
//    {
//        arr[i] += 9;
//        arr[i] %= 10;
//    }
//    int bet = arr[0];
//    arr[0] = arr[2];
//    arr[2] = bet;
//    bet = arr[1];
//    arr[1] = arr[3];
//    arr[3] = bet;
//    for (i = 0; i < 4; i++)
//    {
//        printf("%d", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		int b = a % 10;
//		int c = a / 10 % 10;
//		int d = a / 10 / 10 % 10;
//		int e = a / 10 / 10 / 10;
//		b = (b + 9) % 10;
//		c = (c + 9) % 10;
//		d = (d + 9) % 10;
//		e = (e + 9) % 10;
//		printf("%d", c * 1000+ b * 100+ e * 10+ d * 1);
//		printf("\n");
//	}
//	return 0;
//}
//int add(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//}
//int main()
//{
//	int arr[5] = { 0 };
//	int ret = add(arr);
//	return 0;
//
// i}
//int main()
//{
//	char arr[3] = { "abc" };
//	printf("%s", arr);
//	return 0;
//}
//int main()
//{
//	int arr[4] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	return 0;
//}
//int main()
//{
//	int ret = printf("%d %d\n", 5, 3);
//	printf("%d", ret);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    while (scanf("%d", &a) != eof)
//    {
//        if (1 == a)
//        {
//            printf("1.000000");
//        }
//        else
//        {
//            double sum = 1.0;
//            double j = 3;
//            int i = 0;
//            for (i = 1; i < a; i++)
//            {
//                sum = sum + 1.0 / j;
//                j += 2;
//            }
//            printf("%lf", sum);
//        }
//    }
//    return 0;
//}
//int main()
//{
//	printf("%f", 1.0);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        if (1 == n)
//        {
//            printf("%f\n", 1.0);
//        }
//        else
//        {
//            int i = 0;
//           
//
//            for (i = 1; i < n; i++)
//            {
//                int j = 3;
//                double sum = 1.0;
//                sum = sum + 1 / j;
//                j += 2;
//            }
//            printf("%f\n", sum);
//        }
//
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    while (scanf("%d %d", &a, &b) != EOF)
//    {
//        int c = a > b ? a : b;
//        int d = a > b ? b : a;
//        int f = c;
//        int g = d;
//        if (c % d == 0)
//        {
//            printf("The lowest common multiple of %d and %d is %d\n.", d, c, c);
//        }
//        else
//        {
//            int e = c;
//            while (1)
//            {
//                c++;
//                if (c % d == 0 && c % e == 0)
//                {
//                    printf("The lowest common multiple of %d and %d is %d\n", d, e, c);
//                    break;
//                }
//            }
//        }
//        if (f % g == 0)
//        {
//            printf("The greatest common divisor of %d and %d is %d.\n", g, f, g);
//        }
//        else
//        {
//            int e = g;
//            while (1)
//            {
//                g--;
//                if (e % g == 0 && f % g == 0)
//                {
//                    printf("he greatest common divisor of %d and %d is %d.\n", e, f, g);
//                    break;
//                }
//            }
//        }
//
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int arr[100] = { 1 };
//    int i = 1;
//    while (arr[i-1] > 0)
//    {
//        i++;
//        scanf("%d", &arr[i - 2]);
//    }
//    int j = 0;
//    for (j = 0; j < i; j++)
//    {
//        int sum = 0;
//        if (arr[i] % 2 != 0)
//        {
//            sum += arr[i];
//        }
//    }
//
//    return 0;
//}
#include <stdio.h>
int main()
{
    int a = 0;
    int arr[100] = { 0 };
    int i = 0;
    while (1)
    {
        scanf("%d", &a);
        if (a <= 0)
        {
            break;
        }
        else
        {
            arr[i] = a;
        }
        i++;
    }
    return 0;
}