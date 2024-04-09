#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
//int main()
//{
//    int n;
//    while (scanf("%d", &n) != EOF)
//    {
//        // 输出三角形
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= n - i; j++)
//            {
//                printf(" ");
//            }
//            for (int j = 1; j <= 2 * i - 1; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//
//        printf("\n"); // 输出空行
//    }
//
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 0
//        while (scanf("%d", &a) != EOF)
//        {
//            int i = 0;
//            for (i = 1; i <= a; i++)
//            {
//                int j = 0;
//                for (j = 1; j < i; j++)
//                {
//                    printf(" ");
//                }
//                for (j = 0; j < 2a - 2i + 1; j++)
//                {
//                    printf("*");
//
//   
//             }
//                printf("\n");
//            }
//            printf("\n");
//        }
//    return 0;
//}

//int main()
//{
//    int a = 0;
//    while (scanf("%d",&a) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < a; i++)
//        {
//            int j = 0;
//            for (j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < 2 * a - 2 * i - 1; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        for (i = 1; i < a; i++)
//        {
//            int j = 0;
//            for (j = 0; j < a - 1 - i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < 2 * i + 1; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int c = 0;
//    while (scanf("%d", &c) != EOF)
//    {
//        float f = 0.0f;
//        f = 9 * c / 5 + 32；
//            printf("celsius=%d,fahr=%.1f", c, f);
//        printf("\n");
//    }
//    return 0;
//}
//int main()
//{
//    int math = 0;
//    int eng = 0;
//    int comp = 0;
//    while (scanf("%d %d %d", &math, &eng, &comp) != EOF)
//    {
//        double average = 0.0;
//        average = (math + eng + comp) / 3.;
//        printf("math=%d,eng=%d,comp=%d,average=%.0f", math, eng, comp, average);
//    }
//    return 0;
//}
//int main()
//{
//	double a = 7 / 3;
//	double b = 7.0 / 3;
//	int c = 7 / 3;
//	int d = 7.0 / 3.0;
//	printf("%f %f %d %d ", a, b, c, d);
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	char a = 65;
//	printf("%c", a);
//	return 0;
//}
void print(int a)
{
	if (a >= 10)
	{
		int b = a % 10;
		a = a / 10;
		print(a);
		printf("%d ", b);
	}
	else
	{
		printf("%d ", a);
	}
	
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	print(a);
	return 0;
}