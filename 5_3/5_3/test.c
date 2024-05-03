#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//    int m = 0;
//    int n = 0;
//    while (scanf("%d %d", &m, &n) != EOF)
//    {
//        int temp1 = m;
//        int temp2 = n;
//        while (n != 0)
//        {
//            int p = m % n;
//            m = n;
//            n = p;
//            
//        }
//        int mu = (temp1 * temp2) / m;
//        printf("The lowest common multiple of %d and %d is %d.\n", temp1, temp2, mu);
//        printf("The greatest common divisor of %d and %d is %d.\n", temp1, temp2, m);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int arr[100] = { 0 };
//    while (scanf("%d", &arr[0]) != EOF)
//    {
//        int i = 1;
//        for (i = 1; i < 100; i++)
//        {
//            scanf("%d", &arr[i]);
//            if (arr[i] <= 0)
//            {
//                break;
//            }
//        }
//        int j = 0;
//        int sum = 0;
//        int k = 0;
//        int m = 0;
//        for (j = 0; j < i; j++)
//        {
//            if (arr[j] == 1)
//            {
//            }
//            else if (arr[j] == 2)
//            {
//                sum += arr[j];
//            }
//            else
//            {
//                for (k = 2; k < arr[j]; k++)
//                {
//
//                    if (arr[j] % k == 0)
//                    {
//                        m = 1;
//                    }
//                }
//                if (!m)
//                {
//                    sum += arr[j];
//                }
//            }
//            m = 0;
//        }
//        printf("%d\n", sum);
//    }
//    return 0;
//}
//int
// #include <stdio.h>
//int main()
//{
//    int arr[100] = { 0 };
//    while (scanf("%d", &arr[0]) != EOF)
//    {
//        int i = 0;
//        for (i = 0; arr[i] > 0; i++)
//        {
//            scanf("%d", &arr[i + 1]);
//        }
//        int j = 0;
//        int sum = 0;
//        for (j = 0; j < i; j++)
//        {
//            if (arr[j] == 1)
//            {
//            }
//            else
//            {
//                int k = 0;
//                int m = 1;
//                for (k = 2; k <= sqrt(arr[j]); k++)
//                {
//                    if (arr[j] % k == 0)
//                    {
//                        m = 0;
//                    }
//                }
//                if (m)
//                {
//                    sum += arr[j];
//                }
//
//            }
//        }
//        printf("%d\n", sum);
//    }
//    return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int arr[100] = { 0 };
//    while (scanf("%d", &arr[0]) != EOF)
//    {
//        int i = 0;
//        do
//        {
//            i++;
//            scanf("%d", &arr[i]);
//        } while (arr[i] > 0);
//        int j = 0;
//        int sum = 0;
//        for (j = 0; j < i; j++)
//        {
//            int k = 0;
//            int m = 1;
//            for (k = 2; k <= sqrt(arr[j]); k++)
//            {
//                if (arr[j] % k == 0)
//                {
//                    m = 0;
//                }
//            }
//            if (m && arr[j] != 1)
//            {
//                sum += arr[j];
//            }
//        }
//        printf("%d\n", sum);
//    }
//    return 0;
//}
//int main()
//{
//	int a = sqrt(-3);
//	printf("%d", a);
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int arr[100] = { 0 };
//    int a = 0;
//    int i = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        int sum = 0;
//        if (a > 0)
//        {
//            arr[i] = a;
//            i++;
//        }
//        else
//        {
//            int j = 0;
//
//            for (j = 0; j < i; j++)
//            {
//                int  m = 1;
//                if (arr[j] == 1)
//                {
//
//                }
//                else
//                {
//                    int k = 0;
//                    for (k = 2; k <= sqrt(arr[j]); k++)
//                    {
//                        if (arr[j] % k == 0)
//                        {
//                            m = 0;
//                        }
//                    }
//                    if (m)
//                    {
//                        sum += arr[j];
//                    }
//                }
//            }
//            printf("%d\n", sum);
//            i = 0;
//        }
//    }
//    return 0;
////}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int a = 5 % i;
//		printf("%d", a);
//	}
//	return 0;
//}
//void digit(int x, int i)
//{
//	int a = 0;
//	int n = 1;
//	for (a = 0; a < i; a++)
//	{
//		n *= 10;
//	}
//	printf("%d", x % n);
//}
//int main()
//{
//	int x = 0;
//	int i = 0;
//	while (scanf("%d %d", &x, &i) != EOF)
//	{
//		digit(x, i);
//	}
//	return 0;
//}
//int digit(int x, int i)
//{
//	if (i == 1)
//	{
//		return x % 10;
//	}
//	else
//	{
//		return digit(x / 10, i - 1) * 10 + x % 10;
//	}
//}
//int main()
//{
//	int x = 0;
//	int i = 0;
//	while (scanf("%d %d", &x, &i) != EOF)
//	{
//		 int ret = digit(x, i);
//		 printf("%d", ret);
//	}
//	return 0;
////}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d", n % 10);
//		n /= 10;
//	}
//	return 0;
//}
//void reverse(int n)
//{
//	if (n > 0)
//	{
//		printf("%d", n % 10);
//		reverse(n / 10);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	reverse(n);
//	return 0;
//}
//int main()
//{
//	char name[20] = { 0 };
//	char passord[20] = { 0 };
//	while (scanf("%s %s", &name, &passord) != EOF)
//	{
//	if (!strcmp("admin", name) && !strcmp("admin", passord))
//	{
//		printf("Login Success!");
//	}
//	else
//	{
//		printf("Login Fail!");
//	}
//	}
//	return 0;
//}
/*nt main()
{
	if (-3)
	{
		printf("ee");
	}
	return 0;
}*/
//int main()
//{
//	int a = strcmp("abc", "abc");
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int  n = 0;
//	int  h = 0;
//	int  m = 0;
//	while (scanf("%d %d %d", &n, &h, &m) != EOF)
//	{
//		int a = m / h;
//		int b = m % h;
//		if (b == 0)
//		{
//			printf("%d\n", n - a - 1);
//		}
//		else
//		{
//			printf("%d\n", n - a);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int h = 0;
//	int m = 0;
//	while (scanf("%d %d %d", &n, &h, &m) != EOF)
//	{
//		printf("%d\n", n - (m / h) - (m % h == 0 ? 0 : 1));
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int h = 0;
//	int r = 0;
//	while (scanf("%d %d", &h, &r) != EOF)
//	{
//		double l = 3.14 * h * r * r;
//		double cup = 10000.0 / l;
//		printf("%d\n", (int)cup + (cup == (int)cup ? 0 : 1));
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int hour1 = 0;
//	int minue1 = 0;
//	int time = 0;
//	while (scanf("%d : %d %d", &hour1, &minue1, &time) != EOF)
//	{
//		int ortime = hour1 * 60 + minue1;
//		int ovtime = ortime + time;
//		int hour2 = ovtime / 60%24;
//		int minue2 = ovtime % 60;
//		printf("%02d:%02d", hour2, minue2);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		if (a >= 100)
//		{
//			a %= 100;
//		}
//		if (b >= 100)
//		{
//			b %= 100;
//		}
//		printf("%d", a + b >= 100 ? (a + b) % 100: (a + b));
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	int month = 0;
//	while (scanf("%d %d", &year, &month) != EOF)
//	{
//		switch (month)
//		{
//		case 3:
//		case 5:
//		case 4:
//			printf("spring\n");
//			break;
//		case 6:
//		case 7:
//		case 8:
//			printf("summer\n");
//			break;
//		case 9:
//		case 10:
//		case 11:
//			printf("autumn\n");
//			break;
//		case 12:
//		case 1:
//		case 2:
//			printf("winter\n");
//				break;
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double money = 0.0;
//	int month = 0;
//	int date = 0;
//	int v = 0;
//	while (scanf("%lf %d %d %d", &money, &month, &date, &v) != EOF)
//	{
//		double exp = money * (month == 12 ? 0.8 : 0.7) - (v == 1 ? 50 : 0);
//		printf("%.2f", exp > 0 ? exp:0);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 2019; i++)
//	{
//		while (i)
//		{
//			if (i % 10 == 9)
//			{
//				count++;
//				break;
//			}
//			i /= 10;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i < n; i++)
//	{
//		int temp = i;
//		int n = 1;
//		int h = 0;
//		while (temp)
//		{
//			h += temp % 10 * n;
//			n *= 10;
//			temp /= 10;
//		}
//	}
//	return 0;
//}