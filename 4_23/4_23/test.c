#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h>
//int main()
//{
//    int n, x, i;
//     scanf("%d\n", &n);
//    int arr[51] = { 0 };
//    for (i = 0; i < n; i++)
//        scanf("%d ", &arr[i]);
//    scanf("%d\n", &x);
//    for (i = n; i > 0; i--)  //从后往前依次与x比较
//    {
//        if (arr[i - 1] >= x)  //x更小时，元素后移一位
//            arr[i] = arr[i - 1];
//        else {
//            arr[i] = x;    //x更大时，将x插入，跳出循环
//            break;
//        }
//    }
//    if (i == 0)  arr[i] = x; //易错点，for循环中不包括i=0的情况，要单独处理
//    for (i = 0; i <= n; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}

#include <stdio.h>
int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int arr[100] = { 0 };
        int i = 0;
        int count = 0;
        for (i = 2; i < n; i++)
        {
            int j = 0;
            for (j = i + 1; j <= n; j++)
            {
                if (j % i == 0)
                {
                    arr[count] = j;
                    count++;
                }
            }
        }

        for (i = 2; i <= n; i++)
        {
            int m = 1;
            int j = 0;
            for (j = 0; j < count; j++)
            {
                if (i == arr[count])
                {
                    m = 0;
                }
            }
            if (m)
            {
                printf("%d ", i);
            }
        }
        printf("\n%d\n", count);
    }
    return 0;
}