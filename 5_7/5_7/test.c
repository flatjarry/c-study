#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	float a = 3 / 5.0;
//	printf("%f", a);
//	return 0;
//}
//int main()
//{
//	float a = 3 / 5 + 1.0;
//	printf("%f",a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int money = 0;
//    int year = 0;
//    int rate = 0;
//    while (scanf("%d %d %d", &money, &year, &rate) != EOF)
//    {
//        float a = rate / 100.0;
//        int i = 0;
//        float sum = 1.0f;
//        for (i = 0; i < year; i++)
//        {
//            sum *= (1 + a);
//        }
//        float interest = money * sum - money;
//        printf("interest=%.2f\n", interest);
//    }
//    return 0;
//}
#include <stdio.h>
#include <math.h>
int main()
{
    int a = 0;
    int arr[100] = { 0 };
    int i = 0;
    while (scanf("%d", &a) != EOF)
    {
        if (a > 0)
        {
            arr[i] = a;
            i++;
        }
        else
        {
            int sum = 0;
            int j = 0;
            for (j = 0; j < i; j++)
            {
                if (arr[j] == 1)
                {
                }
                else
                {
                    int m = 1;
                    int k = 0;
                    for (k = 2; k <= sqrt(arr[j]); k++)
                    {
                        if (arr[j] % k == 0)
                        {
                            m == 0;
                        }
                    }
                    if (m)
                    {
                        sum += arr[j];
                    }
                }
            }
            printf("%d\n", sum);
            i = 0;
        }
    }
    return 0;
}