#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int func(int a)
//{
//    int b;
//    switch (a)
//    {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    printf("%d", b);
//    return b;
//}
//int main()
//{
//    int a = 1;
//    func(1);
//    return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	
//	while (scanf("%d", &arr[0]) != EOF)
//	{
//		int i = 0;
//		for (i = 1; i < 10; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				arr[j + 1] = arr[j];
//		}
//		}
//		printf("%d", arr[9]);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double a = 1.0;
//	double sum = 0.0;
//	int b = 1;
//	for (i = 0; i < 100; i++)
//	{
//		sum = sum + b*(1.0 / a);
//		a = a + 1.0;
//		b = -b;
//	}
//	printf("%f", sum);
//	return 0;	
//}
//#include <stdio.h>
//
//int main() {
//    int i;
//    double sum = 0.0;
//
//    for (i = 1; i <= 100; i++) {
//        if (i % 2 == 1) {
//            sum += 1.0 / i;
//        }
//        else {
//            sum -= 1.0 / i;
//        }
//    }
//
//    printf("Sum of the series is: %f\n", sum);
//
//    return 0;
//}
//int main()
//{
//	int i = 0;
//	double a = 1.0;
//	double sum = 0.0;
//
//	for (i = 0; i < 100; i++)
//	{
//		if (a % 2.0 == 0)
//		{
//			sum -= (1.0 / a);
//	   }
//		else
//		{
//			sum += (1.0 / a);
//		}
//
//	}
//	printf("%f", sum);
//	return 0;	
//}
