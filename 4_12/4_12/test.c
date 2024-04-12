#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int arr[100] = { 0 };
//    int i = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        if (a > 0)
//        {
//            arr[i] = a;
//            i++;
//        }
//        if (a <= 0)
//        {
//            int j = 0;
//            int sum = 0;
//            for (j = 0; j < i; j++)
//            {
//                if (arr[j] % 2 != 0 || arr[j] == 2)
//                {
//                    sum += arr[j];
//                }
//            }
//            printf("%d\n", sum);
//            i = 0;
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//struct stu
//{
//    char name[21];
//    int score;
//}
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 100; i++)
//    {
//        if (scanf("\n"))
//        {
//            break;
//        }
//        struct stu i = { "scanf(" % s")","scanf(" % d")" };
//        getchar();
//    }
//    return 0;

//int main()
//{
//	int i = 0;
//	int a = 0;
//	for (i = 0; i < 100; i++)
//	{
//		scanf("%d", &a);
//	}
//	return 0;
//}
//struct stu
//{
//	int score;
//	char name[20];
//};
//int main()
//{
//	struct stu shu = { 0 };
//	scanf("%d", &shu.score);
//	printf("%d", shu.score);
//	return 0;
//}
//#incldue <stdio.h>
//int main()
//{
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        if (a < 10)
//        {
//            printf("%d has one number,is %d", a);
//            printf("\n");
//        }
//        if (a >= 100)
//        {
//            int bet = a;
//            int b = a % 10;
//            a = a / 10;
//            int c = a % 10;
//            a = a / 10;
//            printf("%d have three numbers,are %d,%d,%d", a, b, c, a);
//            printf("\n");
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int arr[100] = { 0 };
//    int i = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        if (a > 0)
//        {
//            arr[i] = a;
//            i++;
//        }
//        if (a <= 0)
//        {
//            int j = 0;
//            int sum = 0;
//            for (j = 0; j < i; j++)
//            {
//                if (arr[j] == 2)
//                {
//                    sum += arr[j];
//                }
//                else if (arr[j] == 1)
//                {
//
//                }
//                else
//                {
//                    int k = 0;
//                    int m = 1;
//                    for (k = 2; k < arr[j]; k++)
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
//}
//#include <stdio.h>

// 函数用于将数字的位数转换为英文表示
//void print_count(int count) {
//    switch (count) {
//    case 1:
//        printf("one");
//        break;
//    case 2:
//        printf("two");
//        break;
//    case 3:
//        printf("three");
//        break;
//    case 4:
//        printf("four");
//        break;
//    case 5:
//        printf("five");
//        break;
//    case 6:
//        printf("six");
//        break;
//    case 7:
//        printf("seven");
//        break;
//    case 8:
//        printf("eight");
//        break;
//    case 9:
//        printf("nine");
//        break;
//    default:
//        break;
//    }
//}
//
//int main() {
//    long long n;
//
//    while (scanf("%lld", &n) != EOF) {
//        if (n == 0) {
//            printf("0 has one number, is zero\n");
//            continue;
//        }
//
//        int count = 0;
//        int digits[20]; // 保存每一位的数字
//
//        // 提取每一位的数字
//        while (n > 0) {
//            digits[count++] = n % 10;
//            n /= 10;
//        }
//
//        // 输出结果
//        print_count(count);
//        printf(" has ");
//        print_count(count);
//        printf(" number, ");
//        if (count > 1) {
//            printf("are ");
//        }
//        else {
//            printf("is ");
//        }
//        for (int i = count - 1; i >= 0; i--) {
//            printf("%d", digits[i]);
//            if (i != 0) printf(",");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int money = 0;
//    int year = 0;
//    int c = 0;
//    while (scanf("%d %d %d", &money, &year, &c) != EOF)
//    {
//        double rate = c / 100.0;
//        double interest = 0.0;
//        int a = 0;
//        double bet = 1.0;
//        for (a = 0; a < year; a++)
//        {
//            double b = (1.0 + rate);
//            bet *= b;
//        }
//        interest = bet * money - money;
//        printf("interest=%.2f", interest);
//    }
//    return 0;
//}
//int main()
//{
//	char a = 43;
//	
//	int b = 34;
//	printf("%d", b);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int time1 = 0;
//    int time2 = 0;
//    while (scanf("%d %d", &time1, &time2) != EOF)
//    {
//        int hour1 = time1 / 100;
//        int minue1 = time1 % 100;
//        int hour2 = time2 / 100;
//        int minue2 = time2 % 100;
//        int c = (hour1 > hour2) ? hour1 : hour2;
//        int d = (hour1 > hour2) ? hour2 : hour1;
//        int e = (minue1 > minue2) ? minue1 : minue2;
//        int f = (minue1 > minue2) ? minue2 : minue1;
//        int a = c - d;
//        int b = e - f;
//        if (a == 0)
//        {
//            printf("The train journey time is %d minutes.\n", b);
//        }
//        else if (b == 0)
//        {
//            printf("The train journey time is %d hours.\n", a);
//        }
//        else
//        {
//            printf("The train journey time is %d hours %d minutes.\n", a, b);
//        }
//        printf("\n");
//    }
//    return 0;
//}