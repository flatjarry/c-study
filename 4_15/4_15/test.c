#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    char operator = 0;
//    while (scanf("%d %d %c", &a, &b, &operator) != EOF)
//    {
//        if (operator=='+')
//        {
//            if (b > 0)
//            {
//                printf("%d + %d = %d", a, b, a + b);
//            }
//            else
//            {
//                printf("%d + (%d) = %d", a, b, a + b);
//            }
//        }
//        else if (operator=='-')
//        {
//            if (b > 0)
//            {
//                printf("%d - %d = %d", a, b, a - b);
//            }
//            else
//            {
//                printf("%d - (%d) = %d", a, b, a - b);
//            }
//        }
//        else if (operator=='*')
//        {
//            if (b > 0)
//            {
//                printf("%d * %d = %d", a, b, a * b);
//            }
//            else
//            {
//                printf("%d * (%d) = %d", a, b, a * b);
//            }
//        }
//        else if (operator=='/')
//        {
//            if (b > 0)
//            {
//                printf("%d / %d = %d", a, b, a / b);
//            }
//            else
//            {
//                printf("%d / (%d) = %d", a, b, a / b);
//            }
//        }
//        else if (operator=='%')
//        {
//            if (b > 0)
//            {
//                printf("%d %c %d = %d", a, '%', b, a % b);
//            }
//            else
//            {
//                printf("%d %c (%d) = %d", a, '%', b, a % b);
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//struct stu
//{
//    char name[21];
//    int score;
//};//构建学生结构体，包含姓名和成绩两个要素
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 100; i++)//建立循环，i表示学生编号，循环一次输入一个学生，最多输入100个学生数据
//    {
//        struct stu i = { 0 };//初始化学生信息
//        if (scanf("%s %d", &i.name, &i.score) != EOF)//输入学生信息
//        {
//            int k = 0;//冒泡循环进行排序，k循环完完成对所有数据的排序
//            for (k = 1; k < i; k++)
//            {
//                int j = 0;
//                for (j = 1; j < i; j++)//j循环完将最小值放到最后一位
//                {
//                    struct stu bet = 0;//构建临时变量存储数据
//                    if (j.score < j + 1.score)//前一位和后一位的成绩进行比较
//                    {
//                        bet.name = j + 1.name;//交换前后数据信息
//                        bet.score = j + 1.name;
//                        j + 1.name = j.name;
//                        j + 1.score = j.score;
//                        j.name = bet.name;
//                        j.score = bet.score;
//                    }
//                }
//            }
//        }
//        else
//        {
//            break;
//        }
//    }
//    int n = 0;
//    for (n = 1; n <= i - 1; n++)
//    {
//        printf("%s %d", n.name, n.score);//输出信息
//    }
//    return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (scanf("%d", &i) != 1)
//		{
//			break;
//		}
//	}
//	int n = 0;
//	for (n = 0; n < i; n++)
//	{
//		printf("%d",a)
//	}
//	return 0;
//}
//struct stu
//{
//	int score;
//};
//int main()
//{
//	struct stu shu = { 0 };
//	scanf("%d", &shu.score);
//	printf("%d", shu.score);
//	return 0;
//}
//#include <stdio.h>
//struct stu
//{
//    char name[21];
//    int score;
//};
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 100; i++)
//    {
//        struct stu i = { 0 };
//        if (scanf("%s %d", &i.name, &i.score) != EOF)
//        {
//            int k = 0;
//            for (k = 1; k < i; k++)
//            {
//                int j = 0;
//                for (j = 1; j < i; j++)
//                {
//                    struct stu bet = 0;
//                    if (j. score < j + 1.score)
//                    {
//                        bet.name = j + 1.name;
//                        bet.score = j + 1.name;
//                        j + 1.name = j.name;
//                        j + 1.score = j.score;
//                        j.name = bet.name;
//                        j.score = bet.score;
//                    }
//                }
//            }
//        }
//        else
//        {
//            break;
//        }
//    }
//    int n = 0;
//    for (n = 1; n <= i - 1; n++)
//    {
//        printf("%s %d", n.name, n.score);
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
//                    printf("The lowest common multiple of %d and %d is %d.\n", d, e, c);
//                    break;
//                }
//
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
//                    printf("The greatest common divisor of %d and %d is %d.\n", e, f, g);
//                    break;
//                }
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int count = 0;
		int bet = n;
		printf("%d ", n);
		for (count = 0; bet > 0; count++)
		{
			bet = bet / 10;
		}
		if (count == 0)
		{
			printf(" has one number,is 0\n");
		}
		printf("have ");
		switch (count)
		{
		case 1:
			printf("one");
		case 2:
			printf("two");
		case 3:
			printf("three");
			break;
		case 4:
			printf("four");
			break;
		case 5:
			printf("five");
			break;
		case 6:
			printf("six");
			break;
		case 7:
			printf("seven");
			break;
		case 8:
			printf("eight");
			break;
		case 9:
			printf("nine");
			break;
		case 10:
			printf("ten");
			break;
		default:
			break;
		}
		int arr[100] = { 0 };
		int j = 0;
		for (j = 0; j < count; j++)
		{
			arr[j] = n % 10;
			n = n / 10;
		}
		printf(" number,are ");
		for (j = 0; j < count; j++)
		{
			printf("%d", arr[j]);
			if (j < count - 1)
			{
				printf(",");
			}
		}
		printf("\n");
		
	}
	return 0;
}