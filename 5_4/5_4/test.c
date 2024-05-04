#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int temp = i;
//		int change = 0;
//		while (temp)
//		{
//			change += temp % 10+change*10;
//			temp /= 10;
//		}
//		if (change == i)
//		{
//			printf("%d", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	 a = 5 + a * 10;
//	 printf("%d", a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	for (i = 1; i <= n; i++)
//	{
//		int temp = 0;
//		int arr[100] = { 0 };
//		int  i = 0;
//		while (temp)
//		{
//			arr[i] = temp % 10;
//			temp /= 10;
//			i++;
//		}
//		int j = 0;
//		int m = 0;
//		for (j = 0; j < i; j++)
//		{
//			if (arr[j] != 0)
//			{
//				
//			}
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//		for (i = 1; i <= n; i++)
//		{
//			int temp = i;
//			int sum = 0;
//			while (temp)
//			{
//				sum *= 10;
//				sum += temp % 10;
//				temp /= 10;
//			}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	float a = 0.0f;
//	float b = 0.0f;
//	char c = 0;
//	scnaf("%f%c%f", &a, &c, &b);
//	switch (c)
//	{
//	case '+':
//		printf("%.4f", a + b);
//		break;
//	case '-':
//		printf("%.4f", a - b);
//		break;
//	case '*':
//		printf("%.4f", a * b);
//		break;
//	case '/':
//		if (b == 0)
//		{
//			printf("Wrong!Division by zero!");
//		}
//		else
//		{
//			printf("%.4f", a / b);
//		}
//		break;
//	default:
//		printf("Invalid operation!");
//		break;
//	}
//	printf("\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				if (i == 0 || i = n - 1 || j == 0 || j == n - 1)
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;	
//	int arr[50] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int  n = -1;
//	int m = 1;
//	for (i = 0; i < n-1; i++)
//	{
//		if (arr[i] <= arr[i + 1])
//		{
//			n = 1;
//		}
//		else if (arr[i] > arr[i + 1])
//		{
//			m = -1;
//		}
//	}
//	if (n * m > 0)
//	{
//		printf("sorted\n");
//	}
//	else
//	{
//		printf("unsorted");
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[50] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	int a = 0;
//	scanf("%d", &a);
//	for (i=n-1; i>=0; i--)
//	{
//		if (arr[i] > a)
//		{
//			arr[i + 1] = arr[i];
//		}
//		else
//		{
//			arr[i + 1] = a;
//		}
//	}
//	for (i = 0; i <= n; i++)
//	{
//		printf("%d ", &arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d",&n,&m);
//	int a = n * m;
//	int temp = 0;
//	int max = 0;
//	int count = 0;
//	while (a)
//	{
//		
//		scanf("%d", &temp);
//		if (temp > max)
//		{
//			max = temp;
//				count = n * m - a;
//		}
//		a--;
//	}
//	int n1 = (count + 1) / m;
//	int m2 = (count + 1) % m;
//	printf("%d %d", n1, m2);
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int max = 0;
//	int x = 0;
//	int y = 0;
//	int arr[10][10] = { 0 };
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				 x = i;
//				 y = j;
//			}
//		}
//	}
//	printf("%d %d", x, y);
//	return 0;
//}
//#include <stdio.h>
//int max3(int a, int b, int c)
//{
//    return (a > b ? a : b) > (a > c ? a : c) ? (a > b ? a : b) : (a > c ? a : c);
//}
//int main()
//{
//    printf("%d", max3(3, 4, 2));
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    char arr[1000] = { 0 };
//    for (i = 1; i <= n; i++)
//    {
//        int j = 0;
//        for (j = 1; j <= m; j++)
//        {
//            scanf("%c", &arr[i][j]);
//        }
//    }
//    return 0;
//}