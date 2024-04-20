#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	printf("%o ", 1234);
//	printf("%#o ", 1234);
//	printf("%x ", 1234);
//	printf("%X ", 1234);
//	printf("%#x ", 1234);
//	printf("%#X ", 1234);
//	int a = 0;
//	int b = 0;
//	scanf("%x %o",&a,&b);
//	printf("%d", a + b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int k = 2;
//    for (i = 1; i < n; i++)
//    {
//        k <<= 1;
//    }
//    printf("%d", k);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int k = 1;
//    k <<= n;
//    printf("%d", k);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    long int age = 0;
//    scanf("%ld", &age);
//    printf("%ld", age * (3.156 * 10 * 10 * 10 * 10 * 10 * 10 * 10));
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    int s = 3156;
//    printf("%-08d", age * s);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    double arr[100] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%lf", &arr[i]);
//    }
//    double temp = 0;
//    double temp2 = 0;
//    for (i = 0; i < n - 1; i++)
//    {
//        if (arr[i] > arr[i + 1])
//        {
//            temp= arr[i];
//            arr[i] = arr[i + 1];
//            arr[i + 1] = temp;
//        }
//    }
//    temp = arr[i];
//    for (i = 0; i < n - 1; i++)
//    {
//        if (arr[i] < arr[i + 1])
//        {
//            temp2 = arr[i];
//            arr[i] = arr[i + 1];
//            arr[i + 1] = temp2;
//        }
//    }
//    temp2 = arr[i];
//    double sum = 0.0;
//    for (i = 0; i < n; i++)
//    {
//        sum += arr[i];
//    }
//    double average = sum / n;
//    printf("%.2f %.2f %.2f", temp, temp2, average);
//    return 0;
//}
//#include<stdio.h> //编程小白，写的不好望多指点
//int main()
//{
//    int n = 0;
//    int i = 0;
//    float max = 0; //最大值
//    float min = 0; //最小值
//    float sum = 0; //求n个数的和
//    scanf("%d", &n);
//    float arr[100] = { 0 }; //存放n科成绩
//    for (i = 0; i < n; i++)
//        scanf("%f", &arr[i]);
//    max = arr[0];
//    min = arr[0];
 /*   for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
        sum += arr[i];
    }*/
//    printf("%.2f %.2f %.2f", max, min, sum / n);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    float max = 0.0;
//    float min = 100.0;
//    float temp = 0.0f;
//    float sum = 0.0f;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%f", &temp);
//        sum += temp;
//        max = (temp > max) ? temp : max;
//        min = (min > temp) ? temp : min;
//    }
//    float average = sum / n;
//    printf("%.2f %.2f %.2f", max, min, average);
//
//    return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    float ci = (a + b + c);
//    float s = sqrt(ci / 2.0(ci - a)(ci - b)(ci - c));
//    printf("circumference=%.2f area=%.2f", ci, s);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int h, r = 0;
//    scanf("%d %d", &h, &r);
//    float v = 3.14 * h * r * r;//计算杯子的体积
//    float vp = v / 1000;//将杯子的体积转化为多少升
//    if (10 / vp == (int)(10 / vp))//如果10升能刚好整除每一杯所含的升数
//    {
//        printf("%f", 10 / vp);
//    }
//    else {
//        printf("%d", (int)(10 / vp) + 1);
//
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int h, r = 0;
//    scanf("%d %d", &h, &r);
//    float v = 3.14 * h * r * r;
//    float vp = v / 1000;
//    if (10.0 / vp == (int)(10.0 / vp))
//    {
//        printf("%f", 10 / vp);
//    }
//    else {
//        printf("%d", (int)(10 / vp) + 1);
//
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a, b = 0;
//    scanf("%d %d", &a, &b);
//    int m = a;
//    int n = b;
//    while (b != 0)
//    {
//        int p = a % b;
//        a = b;
//        b = p;
//    }
//    int c = (m * n) / a;
//    printf("%d", c + a);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int arr[100] = { 0 };
//        int i = 0;
//        for (i = 0; n > 0; i++)
//        {
//            arr[i] = n % 10;
//            n /= 10;
//        }
//        int j = 0;
//        for (j = 0; j < i; j++)
//        {
//     
//            else if (arr[j] % 2 == 0)
//            {
//                arr[j] = 0;
//            }
//            else
//            {
//                arr[j] = 1;
//            }
//        }
//        int sum = 0;
//        int x = 1;
//        for (j = 0; j < i; j++)
//        {
//            sum += arr[j] * x;
//            x *= 10;
//        }
//        printf("%d\n", sum);
//    }
//
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char a = 0;
//    while (scanf("%c", &a)!= EOF)
//    {
//        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
//        {
//            printf("Vowel\n");
//        }
//        else
//        {
//            printf("Consonant\n");
//        }
//
//    }
//
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    float kg, m = 0.0f;
//    scanf("%f %f", &kg, &m);
//    float bmi = kg / (m * m);
//    if (bmi >= 18.5 && bmi <= 23.9)
//    {
//        printf("Normal");
//    }
//    else {
//        printf("Abnormal");
//    }
//
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int input;
//    int count1 = 0;
//        int count2 = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &input);
//        if (input > 0)
//        {
//            count1++;
//        }
//        else if (input < 0)
//        {
//            count2++;
//        }
//    }
//    printf("positive:%d\n", count1);
//    printf("negative:%d\n", count2);
//    return 0;
//}
#include <stdio.h>
int main()
{
    int distance = 0;
    scanf("%d", &distance);
    int time1 = distance / 1;
    float time2 = distance / 10.0 + 10;
    char a = time1 > time2 ? 'v' : 'w';
    printf("%C", a);
    return 0;
}