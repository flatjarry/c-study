#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//
//	int count = 0;
//	int i = 0;
//	for (i = 100; i < 201; i++)
//	{
//		int a = 0;
//		int flat = 1;
//		for (a = 2; a < i ; a++)
//		{
//			if (i% a == 0)
//			{
//				flat = 0;
//				break;
//			}
//		}
//		if (1==flat)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//#include <math.h>
//	int main()
//	{
//		int a = 0;
//		a = sqrt(8);
//		printf("%d\n", a);
//		return 0;
//	}
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i < 201; i+=2)
//	{
//		int c = 0;
//		int a = 0;
//		for (a = 2; a < sqrt(i) + 1; a++)
//		{
//			if (i % a == 0)
//			{
//				c = 1;
//				break;
//			}
//		}
//		if (0 == c)
//		{
//			count++;
//			printf("%d ", i);
//		}
//
//	}
//	printf("%d\n", count);
//	return 0;
//}
//#include <math.h>
//int is_prime(int x)
//{
//	int a = 0;
//	for (a = 2; a < sqrt(x) + 1; a++)
//	{
//		if (x % a == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 101; i < 201; i+=2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("%d", count);
//
//
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year < 2001; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//
//}
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400) == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year < 2001; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//int binary_search(int arr[], int x,int y)
//{
//	int left = 0;
//	int right = y - 1;
//	while (left <= right)
//	{
//		int mid = 0;
//		mid = (left + right) / 2;
//		if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (-1 == ret)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了 下标=%d\n", ret);
//	}
//
//	return 0;
//}
//
//
//
//
//
//int binary_search(int arr[], int x,)
//{
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = 0;
//		mid = (left + right) / 2;
//		if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int ret = binary_search(arr, k);
//	if (-1 == ret)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了 下标=%d\n", ret);
//	}
//
//	return 0;
//}
//int add(int* p)
//{
//	*p++;
//
//}
//int main()
//{
//	int num = 0;
//	printf("%d ", num);
//	add(&num);
//	printf("%d ", num);
//	add(&num);
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	char a[] = "abcd";
//	int l = strlen(a);
//	printf("%d", strlen(a));
//	printf("%d", l);
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = add(a, b);
//	printf("%d", ret);
//	return 0;
////}
//#include "add.h"
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = add(a,b);
//	printf("%d", ret);
//	return 0;
//}
//int main()
//{
//	unsigned int a = 0;
//	scanf("%d", &a);
//	return 0;
//}
//int print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str = str + 1;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = { "abc" };
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//int cheng(int x)
//{
//	if(x>=1)
//	{
//		return x * cheng(x - 1);
//	}
//	if (x == 0)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int b = cheng(n);
//	printf("%d", b);
//	return 0;
//}
//int feb(int x)
//{
//	if(x>=3)
//	{
//		return feb(x - 1) + feb(x - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = feb(a);
//	printf("%d", ret);
////	return 0;
////}
//int feb(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (x >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//		
//	}
//	return 1;
//}
//int main()
//{
//int a = 0;
//scanf("%d", &a);
//int ret = feb(a);
//printf("%d", ret);
//return 0;
//}
//void swap(int* p, int* o)
//{
//	int f = 0;
//	if (*p < *o)
//	{
//		f = *p;
//		*p = *o;
//		*o = f;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	swap(&a, &b);
//	swap(&a, &c);
//	swap(&b, &c);
//	printf("%d %d %d", a, b, c);
//	return 0;
////}
//int main()
//{
//	int i = 0;
//	for (i = 3; i < 101; i+=3)
//	{
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", a, b);
//
//	return 0;
//}
//int gong_yue(int x,int y)
//{
//	for
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	gong_yue(a,b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = (a > b) ? b: a;
//	while (1)
//	{
//		if (a% min == 0 && b % min == 0)
//		{
//			printf("%d", min);
//			break;
//		}
//		min--;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = (a > b) ? a : b;
//	int min = (a > b) ? b : a;
//	int i = 0;
//	for (;;)
//	{
//	    i = max % min;
//		if (i == 0)
//		{
//			break;
//		}
//		max = min;
//		min = i;
//	}
//	printf("%d", min);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while ( c =a % b)
//	{
//		
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//
//	return 0;
//
//
//int main()
//{
//	int a = 0;
//	int count = 0;
//	for (a = 1; a < 101; a++)
//	{
//		int i = 1;
//		while (i < 10)
//		{
//			if (10*i - a == 1)
//			{
//				count++;
//			}
//			i++;
//		}
//
//	}
//	printf("%d", count + 2);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//
//	}
//	printf("%d", count);
//	return 0;
////}
//int main()
//{
//	double sum = 0;
//	int i = 0;
//	int flag = 1;
//	for (i = 1; i < 101; i++)
//	{
//		sum = sum + flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,17,7,8,9,10 };
//	int i = 0;
//	int max = 0;
//	max = arr[i];
//	while (i < 10)
//	{
//		max = ((max>arr[i + 1]) ? max : arr[i + 1]);
//		i++;
//	}
//	printf("%d", max);
//	return 0;
//}
////1*1=1 
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		int j = 0;
//		for(j=1;j<=i;j++)
//		{
//			printf("%d*%d = %-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 1; j < i + 1; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int a = 0;
//int b = 0;
//void test()
//{
//	a = 4;
//	b = 3;
//}
//int main()
//{
//
//	printf("%d %d", a, b);
//	return 0;
//}
//int max_search(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	int ret = max_search(a, b);
//	printf("%d ", ret);
//	return 0;
//}
//exchange(int* x, int* y)
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a,&b);
//	printf("%d %d", a, b);
//	exchange(&a,&b);
//	printf("%d %d", a, b);
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = add(a, b);
//	printf("%d", ret);
//	return 0;
////}
//int check_prime(int x)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 2; i < ; i++)
//	{
//		if (x % i == 0)
//		{
//			count++;
//		}
//	}
//	if (count == 2)
//	{
//		return 1;
//	}
//	else if (count > 2)
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	int ret = check_prime(a);
//	if (ret)
//	{
//		printf("是素数");
//	}
//	else
//	{
//		printf("不是素数");
//	}
//	return 0;
//}
//int check_leap(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	printf("请输入年份");
//	int year = 0;
//	scanf("%d", &year);
//	int ret = check_leap(year);
//	if (ret)
//	{
//		printf("是闰年");
//	}
//	else
//	{
//		printf("不是闰年");
////	}
////	return 0;
////}
//int search(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = (right + left) / 2;
//	while (left <= right)
//	{
//		mid = (right + left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//
//    }
//	return -1;
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = search(arr,k,sz);
//	if (ret!=-1)
//	{
//		printf("找到了，下标是%d", ret);
//	}
//	else
//	{
//		printf("找不到");
//	}
//	return 0;
//}
//void add(int* x)
//{
//	*x = *x + 1;
//}
//int main()
//{chrome
//	int num = 0;
//	add(&num);
//	printf("%d", num);
////}
//int add(int x, int y)
//{
//	return sum(x, y);
//}
//int sum(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = add(a, b);
//	printf("%d", ret);
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//int main()
//{
//	int ret = printf("%d", 555);
//	printf("%d", ret);
//	return 0;
//}
//void print(int x)
//{
//	
//	if (x >= 10)
//	
//	{
//		print(x / 10);
//	}
//		printf("%d ", x % 10);
//	
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}
//void print(int x)
//{
//	if (x >= 10)
//	{
//		print(x / 10);
//		}
//	printf("%d ", x % 10);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int a = 0;
//	scanf("%d", &n);
//	for (i = 1; i < n; i++)
//	{
//		a = n *(n-i);
//	}
//	printf("%d", n);
//	return 0;
//}