#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	char a = 511 ;
//	char b = 126;
//	char c = a + b;
//	printf("%d", c);
//	return 0;
//}
//
//int main()
//{
//	
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		 int a = 5;
//		printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}
int main()
{
	int a = 1;
	int b = (++a) + (++a);
	printf("%d", b);
	return 0;
}