#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	char a = '0';
//	scanf("%c", &a);
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%c%c%c", a,a,a);
//		printf("\n");
//	}
//	return 0;
//}
//
//int main()
//{
//    double a = 0;
//    scanf("%lf", &a);
//    printf("%.0lf", a);
//    return 0;
////}
//int main()
//
//{
//		int id = 0;
//	float c = 0.0;
//	float math = 0.0;
//	float english = 0.0;
//	scanf("%d;%f,%f,%f", &id, &c, &math, &english);
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", id, c, math, english);
//	return 0;
////}
//int main()
//{
//	float a = 0.0f;
//	double b = 0.0;
//	while (scanf("%f %lf", &a, &b) == 2)
//	{
//		printf("a=%.2f b=%.2lf", a, b);;
//	}
//
//	return 0;
////}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%4d%d", &a, &b);
//	printf("%d %02d", a, b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d,%d", &a, &b);
//    printf("a=%d,b=%d", b, a);
////    return 0;
////}
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//
//		printf("%d", a);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	return 0;
//}
//int main()
////{
////    char a = '0';
////    char b = '0';
////    scanf("%c\n%c", &a, &b);
////    printf("%c\n%c", a + 32, b + 32);
////    return 0;
////}
//{
//	printf("%c", 65);
//	return 0;
//}
/*nt main()
{
	char a = '\65';
	printf("%c", a);
	return 0;
//}*/
//int main()
//{
//	int ch = '65';
//	printf("%c\n", ch);//ascii码值用都是像下面那样直接输入的，‘’里是不能放ascii码的
//	printf("%c\n", '65');
//	printf("%c\n", 65);
//	char b = 'A';
//	printf("%c\n", b + 32);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	printf("%d", aa);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    int n = 0;
//    while (scanf("%d %d", &a, &n) != EOF) {
//        int m = 0;
//        int sum = 0;
//        int temp = a;
//        for (m = 1; m <= n; m++) {
//            sum += temp;
//            temp = temp * 10 + a; // 使用原始的 a 来构建下一个 a 的值
//        }
//        printf("Result: %d\n", sum);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char a = '0';
//	char b = '0';
//	scanf("%c\n%c", &a, &b);
//	printf("%c\n%c", a + 32, b + 32);
//	return 0;
//}
//int main()
//{
//	int intput = 0;
//	while (scanf("%d", &intput) != EOF)
//	{
//		int i = 0;
//		for (i = 1; i <= intput; i++)
//		{
//			int j = 0;
//			for (j = 1; j <= i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	char a = '0';
	char b = '0';
	scanf(" %c%c", &a, &b);
	printf("%c\n%c", a + 32, b + 32);
	return 0;
}