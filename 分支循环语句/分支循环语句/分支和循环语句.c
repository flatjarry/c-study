#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 5;
//	if (a > b)
//	{
//		printf("%d\n", a);
//	}
//	 if (a == 3 * b)
//	{
//		printf("%d\n", b);
//	}
//	else
//	{
//		printf("%d\n", a + b);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 10;
//	if (0)
//	{
//		printf("hehe");
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	default:
//		break;
//	}
//	return 0;
//}
//int main()
//{
//    int day = 0;
//    switch (day)
//    {
//    case 1:
//            printf("星期一\n");
//            break;
//        case 2:
//            printf("星期二\n");
//            break;
//        case 3:
//            printf("星期三\n");
//            break;
//        case 4:
//            printf("星期四\n");
//            break;
//        case 5:
//            printf("星期五\n");
//            break;
//        case 6:
//            printf("星期六\n");
//            break;
//        case 7:
//            printf("星期天\n");
//            break;
//    }
//    return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("hehe");
//		break;
//	case 2:
//		printf("haha");
//		break;
//	default:
//		printf("mama");
//
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		printf("haha\n");
//		if (5==i)
//		{
//	break;
//		}
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i == 0; i < 10; i++)
//	{
//		printf("hehe");
//		if (5==i)
//		{
//			continue;
//		}
//	}
//	return 0;
//}
//int main()
//{
//    int x, y;
//    for (x = 0, y = 0; x < 2 || y < 5; x++, y++)
//    {
//        printf("hehe\n");
//    }
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int k = 0;
//    for (i = 0, k = 0; k = 0; i++, k++)
//        k++;
//    return 0;
//}
//int main()
//{
//    int i = 10;
//
//    do
//    {
//        if (5 == i)
//            break;
//        printf("%d\n", i);
//    } while (i < 10);
//
//    return 0;
//}
//int main()
//{
//    int i = 4;
//
//    do
//    {
//        i++;
//        if (5 == i)
//            continue;
//        printf("%d\n", i);
//    } while (i < 10);
//
//    return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 9;
//	int i = 0;
//	while (i < 9)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了k=%d\n", arr[i]);
//			break;
//		}
//		i++;
//	}
//	if (i = 9)
//	{
//		printf("找不到");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 6;
//	int left = 0;
//	int right = 8;
//	int mid = (left + right) / 2;
//	while (!left < right)
//	{
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
//			printf("找到了 k =%d\n", arr[mid]);
//			break;
//		}
//		mid = (left + right) / 2;
//}
//	return 0;
//}
//int main()
//{
//	char arr1[] = { "**********" };
//	char arr2[] = { "hallo bite" };
//	int left = 0;
//	int right = 9;
//	while (left <= right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		left++;
//		right--;
//		printf("%s\n", arr1);
//	}
//	return 0;
//}
//int main()
//{
//	char psw[10] = "";
//	int i = 0;
//	int j = 0;
//	char password = "abcd";
//	for (i = 0; i < 3; i++)
//	{
//		printf("please input");
//		scanf("%s", psw);
//		if (strcmp(psw, "password") == 0)
//			break;
//	}
//	if (i = 3)
//		printf("exit\n");
//	else
//		printf("log in\n");
//	return 0;
//}
//猜数字游戏
//1.进入
//2.退出
//
	//void menu()
	//{
	//	printf("**********************************\n");
	//	printf("*********** 1.play     **********\n");
	//	printf("*********** 0.exit     **********\n");
	//	printf("**********************************\n");
	//}
	//int main()
	//{
	//	int input = 0;
	//	do
	//	{
	//		menu();
	//		printf("请选择:");
	//		
	//		scanf("%d", &input);
	//		switch (input)
	//		{
	//		case 1:
	//			printf("猜数字");
	//			break;
	//		case 0:
	//			printf("退出游戏");
	//			break;
	//		default:
	//			break;
	//		}
	//	
	//	} while (input);
	//	return 0;
	//}
//int main()
//{
//	char intput[] = { "0" };
//
//	system("shutdown -s -t 60");
//again:
//	printf("电脑将在60秒后关机");
//	scanf("%s", intput);
//	if (strcmp(intput, "809825") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//int get_max(int x, int y)
//{
//	return(x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = get_max(a, b);
//	printf("%d\n", m);
//
//	return 0;
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d\n", a, b);
//
//	int* p = &a;
//	int* o = &b;
//	int z = *p;
//	*p = *o;
//	*o = z;
//	printf("%d %d\n", a, b);
//
//	return 0;
//}
// void  swap(int* x,int*y)
//{
//	 int z = 0;
//	 z = *x;
//	 *x = *y;
//	 *y = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d\n", a, b);
//	swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//错误的
//void swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d", a, b);
//	swap(a,b);
//	printf("%d %d", a, b);
//	return 0;
//}