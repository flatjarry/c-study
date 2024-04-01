#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = a || b;
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 2, c = 3, d = 4;
//	int i = a++ && ++b && d++;//&&来说，如果左边为假，就不会执行右边了，直接跳过
//	printf("%d %d %d %d", a, b, c, d);
//	printf("%d", i);
//	return 0;
//}
//int main()
//{
//	int a = 1, b = 0;
//	int i = a++ && b++;//&&左边表达式为真就会执行右边的表达式，不管其真假性，但最终整个表达式的结果还是要看共同
//	printf("%d %d ", a, b);
//	printf("%d", i);
//
//	return 0;
////}
//int main()
//{
//	int a = 0, b = 2, c = 3, d = 4;
//	int i = a++ || b++ || d++;
//	printf("%d %d %d %d", a, b, c, d);
//	printf("%d", i);
//	return 0;
//}
//int main()
//{
//	printf("ab\b\n");
//	return 0;
////}\ ? : 
//int main()
//{
//	int a = 5;
//	int b = 3;
//	int i = (a > b) ? a : b;
//	printf("%d", i);
//	return 0;
////}
//int main()
//{
//	int a = 4;
//	int b = 3;
//	int c = (a += 3, b += 2, a + b);
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1); 
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int arr[8] = { 0 };
//	arr[7] = 0;
//	7[arr] = 9;
//	*(arr + 7) = 8;
//	return 0;
//}
struct stu
{
	int age;
	int score;
	char name[20];
};
void set_stu(struct stu* shu)
{
	(*shu).age = 18;
	(*shu).score = 100;
	strcpy((*shu).name, "shuwenjie");
	(*shu).name = "shuwenjie";
	shu->age = 20;
	shu->score = 150;
}
void print_stu(struct stu* shu)
{
	printf("%d %d %s", shu->age, shu->score,shu->name);	
}

int main()
{
	struct stu shu = {0};
	set_stu(&shu);
	print_stu(&shu);
	return 0;
}
char arr[20] = { 0 };
arr[20] = "shu";