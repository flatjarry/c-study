#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int a = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				a = 0;
//			}
//		}
//		if (a)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//
//// Function to calculate the greatest common divisor
//int gcd(int a, int b) {
//    while (b != 0) {
//        int temp = b;
//        b = a % b;
//        a = temp;
//    }
//    return a;
//}
//
//// Function to calculate the lowest common multiple
//int lcm(int a, int b) {
//    return (a * b) / gcd(a, b);
//}
//
//int main() {
//    int m, n;
//
//    // Read input until end of file
//    while (scanf("%d %d", &m, &n) != EOF) {
//        // Calculate gcd and lcm
//        int gcd_result = gcd(m, n);
//        int lcm_result = lcm(m, n);
//
//        // Output results
//        printf("The lowest common multiple of %d and %d is %d.\n", m, n, lcm_result);
//        printf("The greatest common divisor of %d and %d is %d.\n\n", m, n, gcd_result);
//    }
//
//    return 0;
//}
//struct stu
//{
//	char name[21];
//	int score;
//};
//int main()
//{
//	struct stu stu[100] = { 0 };
//	int i = 0;
//	while (scanf("%s %d", stu[i].name, &stu[i].score) != EOF)
//	{
//		for (i = 1; scanf("%s %d", stu[i].name, &stu[i].score) != EOF; i++)
//		{
//		}
//		int j = 0;
//		for (j = 0; j < i - 1; j++)
//		{
//			int k = j;
//			struct stu bmt = { 0 };
//			for (k = 0; k < i - 1; k++)
//			{
//				if (stu[k].score < stu[k + 1].score)
//				{
//					bmt = stu[k];
//					stu[k] = stu[k + 1];
//					stu[k + 1] = bmt;
//
//				}
//			}
//		}
//		int k = 0;
//		for (k = 0; k < i; k++)
//		{
//			printf("%-20s %3d\n", stu[k].name, stu[k].score);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//struct stu
//{
//    char name[20];
//    int score;
//};
//int main()
//{
//    struct stu stu[100] = { 0 };
//    int i = 0;
//    for (i = 0; scanf("%s %d", stu[i].name, &stu[i].score) != EOF; i++)
//    {
//    }
//    int j = 0;
//    for (j = 0; j < i - 1; j++)
//    {
//        int k = 0;
//        for (k = 0; k < i - 1; k++)
//        {
//            struct stu bet = { 0 };
//            if (stu[k].score < stu[k + 1]score)
//            {
//                bet = stu[k];
//                stu[k] = stu[k + 1];
//                stu[k + 1] = stu[k];
//            }
//        }
//    }
//    for (k = 0; k < i; k++)
//    {
//        printf("%-20s %3d\n", stu[k].name, stu[k].score);
//    }
//    return 0;
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
//    for (i = 0; scanf("%s %d", stu[i].name,&stu[i].score) != EOF; i++)
//    {
//    }
//    int j = 0;
//    struct stu bmt = { 0 };
//    for (j = 0; j < i - 1; j++)
//    {
//        int k = 0;
//        for (k = 0; k < i - 1; k++)
//        {
//            if (stu[j].score < stu[j + 1].score)
//            {
//                bmt = stu[j];
//                stu[j] = stu[j + 1];
//                stu[j + 1] = bmt;
//            }
//        }
//    }
//    printf("Max is %d,name ", stu[0].score);
//    int count = 0;
//    int k = 0;
//    for (k = 0; k < i; k++)
//    {
//        if (stu[k].score == stu[0].score)
//        {
//            count++;
//        }
//    }
//    if (count > 1)
//    {
//        printf("have ");
//        int m = 0;
//        for (m = 0; m < count - 1; m++)
//        {
//            printf("%s,",stu[m].name);
//        }
//    }
//    else
//    {
//        printf("has ");
//    }
//    printf("%s", stu[count - 1].name);
//
//    return 0;
//}