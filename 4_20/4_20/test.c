#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>
#include <math.h>
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 100; i < 1000; i++)
//    {
//        int j = 0;
//        int m = 1;
//        for (j = 2; j < sqrt(i); j++)
//        {
//            if (i % j == 0)
//            {
//                m = 0;
//            }
//        }
//        if (m)
//        {
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int sum = 0;
//    int i = 0;
//    int k = 1;
//    for (i = 1; i <= n; i++)
//    {
//        sum += k * i;
//        k = -k;
//    }
//    printf("%d", sum);
//    return 0;
//}
#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int sum = 0;
    if (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    printf("%d", sum);
    return 0;
}