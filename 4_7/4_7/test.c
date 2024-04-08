#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//    char ch = 0;
//    while (scanf("%c", &ch) != EOF)
//    {
//        getchar();
//        printf("%c", ch + 32);
//        printf("\n");
//    }
//    return 0;
//}
//int main()
//{
//	int a = 0;
//	a = getchar();
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	a = getchar();
//	printf("%c", a);
//	return 0;
//}
//int main()
//{
//	int a = 65;
//	putchar(a);
//	return 0;
//}
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) != EOF)
//	{
//		getchar();
//		printf("%c", ch + 32);
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	while ((a = getchar()) != EOF)
//	{
//		getchar();
//		putchar(a + 32);
//		putchar('\n');
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int i = 0;
//	scanf("%d", &a);
//	for (i = 0; i < a; i++)
//	{
//		int b = 0;
//		int c = 0;
//		scanf("%d %d", &b, &c);
//		printf("%d", b + c);
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while ((scanf("%d %d", &a, &b)) != EOF)
//	{
//		printf("%d", a + b);
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		if (a==0&&b==0)
//		{
//			break;
//		}
//		printf("%d", a + b);
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		if (a == 0)
//		{
//			break;
//		}
//		int i = 0;
//		int sum = 0;
//		for (i = 0; i < a; i++)
//		{
//			int b = 0;
//			scanf("%d", &b);
//			sum += b;
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
////}
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    int i = 0;
//    for (i = 0; i < a; i++)
//    {
//        int b = 0;
//        int c = 0;
//        scanf("%d %d", &a, &b);
//        printf("%d\n", a + b);
//        if (i < a - 1)
//        {
//            printf("\n");
//        }
//    }
//    return 0;
//}
//for(i=1;i<=a;i++)
//for(j=0;j<i;j++)
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        int i = 0;
//        for (i = 1; i <= a; i++)
//        {
//            int j = 0;
//            for (j = 1; j <= a - i; j++)
//            {
//                printf(" ");
//            }
//            printf("%*s", i + 6, "*\n");
//        }
//    }
//    return 0;
#include <stdio.h>
int main()
{
    int a = 0;
    while (scanf("%d", &a) != EOF)
    {
        int i = 0;
        for (i = 1; i <= a; i++)
        {
            int j = 0;
            for (j = 1; j <= i; j++)
            {
                printf("%3c", '*');
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}