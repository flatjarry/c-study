#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//int main()
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 5; i++)
//    {
//        float score = 0.0;
//        float sum = 0.0;
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%f", &score);
//            sum += score;
//            printf("%.1f ", score);
//        }
//        printf("%.1f\n", sum);
//    }
//    return 0;
//}
//int x = 0;
//int y = 0;
//scanf("%d %d", &x, &y);
//int arr[x + 1; y + 1];
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int max = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (arr[i][j] > max)
//            {
//                max = arr[i][j];
//            }
//        }
//    }
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            if (arr[i][j] == max)
//            {
//                break;
//            }
//        }
//    }
//    printf("%d %d", i, j + 1);
//    return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 2;
//	float c = (float)a / b;
//	printf("%f", c);
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//
//	for (i = 1; i <=5; i++)
//	{
//		int j = 0;
//		for (j = i; j <= 5; j++)
//		{
//			int k = 0;
//			int sum = 0;
//			for (k = i; k <= j; k++)
//			{
//				sum += arr[k-1];
//			}
//			printf("%d\n", sum);
//		}
//	}
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
//#include <stdio.h>
//
//// 计算数组和
//int arraySum(int* arr, int n) {
//    int sum = 0;
//    for (int i = 0; i < n; ++i) {
//        sum += arr[i];
//    }
//    return sum;
//}
//
//// 找到子数组之和最接近的子数组
//void closestSubarray(int* a, int n, int* b, int m) {
//    int minDiff = 2147483647; // INT_MAX
//    int startIndex = 0; // 记录起始点
//    int overindex = 0;
//    // 计算数组a的和
//    int aSum = 0;
//    for (int i = 0; i < n; ++i) {
//        aSum += a[i];
//    }
//
//    // 遍历数组b的所有连续子数组
//    for (int i = 0; i < m; ++i) {
//        for (int j = i; j < m; ++j) {
//            int subarraySum = 0; // 子数组之和
//            for (int k = i; k <= j; ++k) {
//                subarraySum += b[k];
//            }
//            int diff = subarraySum - aSum; // 子数组之和与数组a之和的差值
//            if (diff < 0) diff = -diff;
//
//            // 更新最小差值和起始点
//            if (diff < minDiff) {
//                minDiff = diff;
//                startIndex = i;
//                overindex = j;
//            }
//        }
//    }
//
//    // 输出结果
//    int l = 0;
//    for (l = startIndex; l <= overindex; l++)
//    {
//        printf("%d ", b[l]);
//    }
//}
//
//int main() {
//    int n, m;
//    scanf("%d %d", &n, &m);
//
//    int a[1000], b[1000];
//
//    for (int i = 0; i < n; ++i) {
//        scanf("%d", &a[i]);
//    }
//    for (int i = 0; i < m; ++i) {
//        scanf("%d", &b[i]);
//    }
//
//    closestSubarray(a, n, b, m);
//
//    return 0;
//}
//1.输入数据
//2.求a之和
//3.求b子数组
//4.求差异大小
//5.输出
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int a[100] = { 0 };
//	int b[100] = { 0 };
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &b[i]);
//	}
//	int sum1 = 0;
//	for (i = 0; i < n; i++)
//	{	
//		sum1 += a[i];
//	}
//	int differmin = 2147483647;
//	int startindex = 0;
//	int overindex = 0;
// 	for (i = 0; i < m; i++)
//	{
//		int j = 0;
//		for (j = i; j < m; j++)
//		{
//			int k = 0;
//			int sum2 = 0;
//			int differ = 0;
//			for (k = i; k <= j; k++)
//			{
//				
//				sum2 += b[k];
//		     }
//			differ = sum2 - sum1;
//			if (differ < 0)
//			{
//				differ = -differ;
//			}
//			if (differ < differmin || differ == differmin&&i<startindex)
//			{
//				differmin = differ;
//				startindex = i;
//				overindex = j;
//			}
//			
//		}
//	}
//	for (startindex; startindex <= overindex; startindex++)
//	{
//		printf("%d ", b[startindex]);
//	}
//
//	return 0;
//}
/*#include <stdio.h>
int main()
{
    int t = 0;
    scanf("%d", &t);
    int count = 0;
    int temp = t;
    while (temp)
    {
        temp /= 10;
        count++;
    }
    if (count % 2 == 0)
    {
        int m = 1;
        int i = 0;
        temp = t;
        for (i = 0; i < count; i++)
        {
            t = t * 10 + temp % 10;
            temp /= 10;
        }
        for (i = 2; i < t; i++)
        {
            if (t % i == 0)
            {
                m = 0;
            }
        }
        if (m)
        {
            printf("prime");
        }
        else {
            printf("noprime");
        }
    }
    else {
        int m = 1;
        int i = 0;
        temp = t / 10;
        for (i = 0; i < count; i++)
        {
            t = t * 10 + temp % 10;
            temp /= 10;
        }
        for (i = 2; i < t; i++)
        {
            if (t % i == 0)
            {
                m = 0;
            }
        }
        if (m)
        {
            printf("prime");
        }
        else {
            printf("noprime");
        }
    }
    //retu*/;
//#include <stdio.h>
//#include <math.h>
//    int main()
//    {
//        int t = 0;
//        scanf("%d", &t);
//        int count = 0;
//        int temp = t;
//        while (temp)
//        {
//            temp /= 10;
//            count++;
//        }
//
//        int m = 1;
//       long  int i = 0;
//        temp = t / 10;
//        for (i = 0; i < count - 1; i++)
//        {
//            t = t * 10 + temp % 10;
//            temp /= 10;
//        }
//        for (i = 2; i <= sqrt(t); i++)
//        {
//            if (t % i == 0)
//            {
//                m = 0;
//            }
//        }
//        if (m)
//        {
//            printf("prime");
//        }
//        else {
//            printf("noprime");
//        }
//
//        return 0;
//    }
//    int main()
//    {
//        int a = 2;
//        int b = 3;
//        int c = pow(a, b);
//        printf("%d", c);
//}
//int main()
//{
//int arr[5] = { 1,2,3,4,5 }
//int i = 0;
//for (i = 0; i < 5; i++)//固定起始值
//{
//    int j = 0;
//    for (j = i; j <= 5; j++)//固定终止值
//    {
//        int k = 0;
//        int sum = 0;
//        for (k = i; k < j; k++)//变量遍历起始和终止之间的值
//        {
//            sum += arr[k];
//        }
//        printf("%d ", sum);
//    }
//}
//return 0；
//}