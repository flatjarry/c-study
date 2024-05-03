#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	char arr[4] = { 0 };
//	scanf("%s", arr);
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//
//		printf("%c", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	char a = 65;
//	printf("%c ", a);
//	printf("%c ",65);
//
//	return 0;
//}
//int main()
//{
//	char a = 5;
//	char b = 125;
//	printf("%d", a+b);
//	return 0;
//}
//int main()
//{
//	int j = 0;
//	for (j = 0; j < 4; j++)
//	{
//		 j = 3;
//	}
//	return 0;
//}
//int main()
//{
//		for (int i = 0; i < 4; i++)
//		{
//		
//		}
//	printf("%d",i);
//	return 0;
//}
//int main()
//{
//	char arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int a = strlen(arr);
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	char arr[5] = {1,2};
//	int a = strlen(arr);
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int a = getchar();
//	printf("%d", a);
//	putchar(a + 32);
//	return 0;
//}
//arr &arr arr[1] %arr[1]
//void print(int a)
//{
//	if (a / 10 == 0)
//	{
//		printf("%d ", a);
//	}
//	else
//	{
//		print(a / 10);
//		printf("%d ", a % 10);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}
	//#include <string.h>
	//int main()
	//{
	//     int a = strcmp("shuwenjie", "shuwenjie");
	//	 printf("%d", a);
	//	 return 0;
	//}
//int main()
//{
//	char arr[4] = { 'a','b','c' };
//	printf("%s", arr);
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = i; j < 5; j++)
//		{
//			int k = 0;
//			int sum = 0;
//			for (k = i; k <= j; k++)
//			{
//				sum += arr[k];
//			}
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = ++a;
//	a = 1;
//	int c = a++;
//	a = 1;
//	printf("%d\n%d\n%d", a, b, c);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a);
//	printf("%d", b);
//	return 0;
//}
//int main()
//{
//	printf("%5d\n", 123);
//	printf("%-5d\n", 123);
//	printf("%05d\n", 123);
//	printf("%f\n", 1.2);
//	printf("%.2f\n", 1.2);
//	printf("%5.2f\n", 1.2);
//	printf("%-5.2f\n", 1.2);
//	printf("%-05.2f\n",1.2);
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%4d %2d", &year, &month);
//	printf("%d %d", year, month);
//	return 0;
//}
//int main()
//{
//	printf("%%d", 3);
//	return 0;
//}
//int main()
//{
//	float a = 5.0f;
//	float b = 2.0f;
//	float c = a / b;
//	printf("%.0f", c);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	for (i = 1; i < 4; i++)
//	{
//		static int b = 0;
//		b++;
//		printf("%d\n", b);
//	}
//	return 0;
//}
//int main()
//{
//	float a = 3.99;
//	printf("%d",(int)a);
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
//    struct stu stu[100] = { 0 };
//    int i = 0;
//    for (i = 0; scanf("%s %d", stu[i].name, &stu[i].score) != EOF; i++)
//    {
//    }
//    int max = 0;
//    int min = 100;
//    int j = 0;
//    for (j = 0; j < i - 1; j++)
//    {
//        int k = 0;
//        for (k = 0; k < i - 1; k++)
//        {
//            if (stu[k].score < stu[k + 1].score)
//            {
//                struct stu temp = stu[k];
//                stu[k] = stu[k + 1];
//                stu[k + 1] = temp;
//            }
//        }
//    }
//    printf("Max is %d,name ", stu[0].score);
//    int count = 0;
//    for (j = 0; j < i; j++)
//    {
//        if (stu[j].score == stu[0].score)
//        {
//            count++;
//        }
//    }
//    if (count > 1)
//    {
//        printf("have ");
//    }
//    else
//    {
//        printf("has ");
//    }
//    for (j = 0; j < count; j++)
//    {
//        if (j < count - 1)
//        {
//            printf("%s,"stu[j].name);
//        }
//        else
//        {
//            printf("%s", stu[j].name);
//        }
//    }
//    printf("\n");
//    int count2 = 0;
//    printf("Min is %d,name ", stu[i - 1].score);
//    for (j = i - 1; j >= 0; j--)
//    {
//        if (stu[j].score == stu[i - 1].score)
//        {
//            count2++;
//        }
//    }
//    if (count2 > 1)
//    {
//        printf("have ");
//    }
//    else
//        printf("has ");
//    for (j = i - count; j <= i - 1; j++)
//    {
//        if (j < i - 1)
//        {
//            printf("%s,"stu[j].name);
//        }
//        else
//        {
//            printf("%s", stu[j].name);
//        }
//    }
//
//    return 0;
//}
//int main()
//{
//	int a = 0;
//	switch (a)
//	{
//	case 0:
//		printf("sss");
//	}
//	return 0;
////}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int temp = n;
//        printf("%d", n);
//        int count = 0;
//        while (n % 10 > 0)
//        {
//            n /= 10;
//            count++;
//        }
//        switch (count)
//        {
//        case 0:
//        case 1:
//            printf(" has one number,is %d", n);
//            break;
//        case 2:
//            printf(" have two numbers,are ");
//            break;
//        case 3:
//            printf(" have three numbers,are ");
//            break;
//        case 4:
//            printf(" have four numbers,are ");
//            break;
//        case 5:
//            printf(" have five numbers,are ");
//            break;
//        case 6:
//            printf(" have six numbers,are ");
//            break;
//        case 7:
//            printf(" have seven numbers,are ");
//            break;
//        case 8:
//            printf(" have eight numbers,are ");
//            break;
//        case 9:
//            printf(" have nine numbers,are ");
//            break;
//        case 10:
//            printf(" have ten numbers,are ");
//            break;
//        }
//        int i = 0;
//        for (i = 0; i < count; i++)
//        {
//            if (i < count - 1)
//            {
//                printf("%d,", temp % 10);
//            }
//            else
//            {
//                printf("%d", temp % 10);
//            }
//            temp /= 10;
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int x = 0;
//    while (scanf("%d", &x) != EOF)
//    {
//        if (x < 0)
//        {
//            printf("%.2f\n", (x + 1) * (x + 1) + 2 * x + 1.0 / x);
//        }
//        else
//        {
//            printf("%.2f\n", sqrt(x));
//        }
//    }
//
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    char c = 0;
//    while (scnaf("%d %d %c", &a, &b, &c) != EOF)
//    {
//        if (c == '+')
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
//        else if (c == '-')
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
//        else if (c == '*')
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
//        else if (c == '/')
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
//        else if (c == '%')
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
#include <stdio.h>
int main()
{
    int arr[4] = { 0 };
    int i = 0;
    while (scanf("%d", &arr[i]) != EOF)
    {
        for (i = 1; i < 4; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (i = 0; i < 4; i++)
        {
            arr[i] += 9;
            arr[i] %= 10;
        }
        int temp = 0;
        temp = arr[0];
        arr[0] = arr[2];
        arr[2] = temp;
        temp = arr[1];
        arr[1] = arr[3];
        arr[3] = temp;
        for (i = 0; i < 4; i++)
        {
            printf("%d", arr[i]);
        }
        printf("\n");
        i = 0;
    }
    return 0;
}