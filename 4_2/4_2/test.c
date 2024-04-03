#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//struct stu
//{
//	int age;
//	int score;
//	char name[20];
//};
//void set_stu(struct stu* shu)
//{
//	(*shu).age = 18;
//	(*shu).score = 100;
//	strcpy((*shu).name, "shuwenjie");
//	//shu->age = 20;
//	//shu->score = 150;
//	//strcpy(shu->name, "nanfang");
//
//}
//void print_stu(struct stu shu)
//{
//	printf("%d %d %s", shu.age, shu.score, shu.name);
//}
//int main()
//{
//	struct stu shu = { 0 };
//	set_stu(&shu);
//	print_stu(shu);
//	return 0;
//}
//int main()
//{
//	printf("%d ", 123);
//	printf("%5d ", 123);
//	printf("%5d ", 123456);
//	return 0;
//}
//int main()
//{
//	printf("%-5sxxx", "shu ");
//	return 0;
//}
//int main()
//{
//	printf("%d\n", 123);
//    printf("%5d\n", 123);
//	printf("%-5d\n", 123);
//	printf("%-5d\n", 123456);
//	printf("%f\n", 2.345);
//	printf("%.3f\n", 2.345);
//	printf("%6.3f\n", 2.345);
//
//}
//int main()
//{
//	printf("%.3s", "lasj");
//	return 0;
//}
//int main()
//{
//	printf("*.*%d", 6,2,3);
//	return 0;
//}
//int main()
//{
//	double  a = 3.14159;
//	printf("%*.*lf", 4, 3, a);
//	return 0;
//}
//int main()
//{
//	double a = 3.14;
//	printf("%*.*lf", 6, 3, a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	char b = '0';
//	scanf("%d", &a);
//	printf("%d", a);
//	scanf("%c", &b);
//	printf("%c", b);
//	return 0;
////}
//int main()
//{
//	float a = '0';
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	 printf("%d %d", a, b);
//	 int c = printf;
//	printf("%d",c);
//	return 0;
////}
//int main()
//{
//	int a = 0, b = 0, c = 0;
//int ret =	scanf("%d %d %d", &a, &b, &c);
//printf("%d", ret);
//
////}
//int main()
//{
//	char a = '0';
//	scanf(" %c",&a);
//	printf("xxxxx%cyyyyyy", a);
//	return 0;
//}
//int main()
//{
//	char arr[5] = { 0 };
//	scanf("%4s", &arr);
//	printf("%s", arr);
//	return 0;
//}
// 
//int main()
//{
//	char arr[20] = { 0 };
//	strcpy(arr, "shuwenjie");
//	printf("%s", arr);
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d%*c %d%*c%d", &a, &b, &c);
//	printf("%d %d %d", a, b, c);
////	return 0;
////}
//int main()
//{
//int a = 0;
//int b = 0;
//while (1)
//{
//    scanf("%d %d", &a, &b);
//    if (a == b)
//    {
//        printf("%d=%d", a, b);
//    }
//    else if (a > b)
//    {
//        printf("%d>%d", a, b);
//    }
//    else
//    {
//        printf("%d<%d", a, b);
//    }
//}
//return 0;
//}
//int main()
//{
//	int a = 0;
//	for (a = 1; a < 101; a++)
//	{
//		if (a % 3 == 0)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}

////
//int main() {
//    int num1=0, num2=0, num3=0, temp=0;
//
//    printf("请输入三个整数，以空格分隔：");
//    scanf("%d %d %d", &num1, &num2, &num3);
//
//    // 使用冒泡排序将三个数从大到小排列
//    int i, j;
//    for (i = 0; i < 2; i++) {
//        for (j = 1; j < 3 - i; j++) {
//            if (numj < numj + 1) {
//                // 交换位置
//                temp = numj;
//                numj = numj + 1;
//                numj + 1 = temp;
//            }
//        }
//    }
//
//    printf("从大到小排序后的结果为：%d %d %d\n", num1, num2, num3);
//
//    return 0;
//}
int main()
{
	int num[3] = { 0 };
	scanf("%d %d %d", &num[0], &num[1], &num[2]);
	int i = 0;
	for (i = 0; i < 2; i++)
	{
		int j = 0;
		for (j = 0; j < 2 - i; j++)
		{
			if (num[j] > num[j+1])
			{
				int c = num[j];
				num[j] = num[j+1];
				num[j+1] = c;
			}
		}
	}
	for (i = 0; i < 3; i++)
	{
		printf("%d ", num[i]);
	}
	printf("\n");

	return 0;
}