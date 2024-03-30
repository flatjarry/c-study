#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3 };
//	printf("%p ", &arr[0]);
//	printf("%p", arr);
//	return 0;
//}
//1 2 
//2 3 4 5
//3 4 5 6
//
//int main()
//{
//	int arr[][3] = { {1,2,3},{2,3,4},{3,4,5} };
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
////}
//void boubble_sort(int arr[],int sz)
//{
//	int i = 0;
//
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz-i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	boubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1); 这里不明白，为什么地址加1要加四个字节直接跳到下一个元素？
//			printf("%p\n", &arr);
//		printf("%p\n", &arr + 1);还有这个也一样，不理解为毛变成那样 靠
//	return 0;
//}
//int main()
//{
//	int arr[8] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//
/*int main()
{
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int a = sizeof(arr) / sizeof(arr[0][0]);
	printf("%d\n", a);
	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);
	printf("%p\n", arr);
	printf("%p\n", arr + 1);
	return 0;
}
1 2 3 4
5 6 7 8
9 10 */
//int main()
//{
//	int arr[3][4] = { 0 };
//	printf("%d ", sizeof(arr) / sizeof(arr[0]));
//	printf("%d", sizeof(arr[0])/sizeof(arr[0][0]));
//	return 0;
//}
//void bubble_sort(int arr[],int x)
//{
//	int i = 0;
//	for (i = 0; i < x - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < x - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int a = 0;
//				a = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = a;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
#include <string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	int a = strlen(arr);
//	int b = sizeof(arr) / sizeof(arr[0]);
//	printf("%d%d", a, b);
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int right = sizeof(arr) / sizeof(arr[0]) - 2;
//	int left = 0;
//	while (left < right)
//	{
//		int a = arr[left];
//		arr[left] = arr[right];
//		arr[right] = a;
//		left++;
//		right--;
//	}
//	printf("%s", arr);
//	return 0;
//
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr!=/0)
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//void reverse(char arr[])
//{
//	int size = strlen(arr);
//	int tmp = *arr;
//	*arr = arr[size - 1];
//	arr[size - 1] = '\0';
//	if (strlen(arr + 1) >= 2)
//	{
//		reverse(arr + 1);
//	}
//	arr[size - 1] = tmp;
//}
//		void reverse(char arr[], int left, int right)
//		{
//			char tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//			if (left < right)
//			{
//				reverse(arr,left, right);
//			}
//		}
//int main()
//{
//	char arr[] = "abcdef";
//	int left = 0;
//	int right = strlen(arr) - 1;
//	reverse( arr,left,right);
//	printf("%s", arr);
//	return 0;
//}
//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//	return 0;
//}
//double Pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 1.0 / (Pow(n, -k));
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}
//int main()
//{
//	int x = (3 + 3, 3 + 2, 3 + 1);
//	printf("%d", x);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[10]));
////}
//int main()
//{
//	int  a = 0;
//	printf("%d", a);
//	printf("%d", int);
//	return 0;
////}
//int main()
//{
//	char arr1[4] = "abcd";
//	char arr2[] = "abcd";
//	int arr3[][4] = { {2,3},{4,5} };
//	printf("%d ", strlen(arr1));
//	printf("%d ", strlen(arr2));
//	printf("%d ", sizeof(arr1));
//	printf("%d ", sizeof(arr2));
//
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 1;
//	while (left <right)
//	{
//		int tmp = arr1[left];
//		arr1[left] = arr2[left];
//		arr2[left] = tmp;
//		int tmp2 = arr1[right];
//		arr1[right] = arr2[right];
//		arr2[right] = tmp2;
//		left++;
//		right--;
//	}
//	if (left == right)
//	{
//		int tmp = arr1[left];
//		arr1[left] = arr2[left];
//		arr2[left] = tmp;
//	}
//	int i = 0;
//	while (i <= sizeof(arr1) / sizeof(arr1[0]) - 1)
//	{
//		printf("%d", arr1[i]);
//		i++;
//	}
//	printf("\n");
//	int j = 0;
//	while (j <= sizeof(arr1) / sizeof(arr1[0]) - 1)
//	{
//		printf("%d", arr2[j]);
//		j++;
//	}
//	return 0;
//}
void init(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i <= sz; i++)
	{
		arr[i] = 0;
	}
}	
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i <= sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz;
	while (left < right)
	{
		int tmp = 0;
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8};
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	//init(arr,sz);
	/*print(arr,sz);*/
	reverse(arr, sz);
	int i = 0;
	for (i = 0; i <= sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
printf（“haha