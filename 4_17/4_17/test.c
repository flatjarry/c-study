#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%3c", '*');
//	}
//	
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 1; j < n - i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < 2i + 1; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//int main()
//{
//	int a = 5;
//	printf("%.1f", a);
//}
//#include <stdio.h>
//struct stu
//{
//    char name[21];
//    int score;
//};
//int main()
//{
//    struct stu stu[100] = { 0 };
//    int i = 0;
//    for (i = 0; scanf("%s %d", stu[i].name, &stu[i].score) != EOF; i++)
//    {
//    }
//    int j = 0;
//    for (j = 0; j < i - 1; j++)
//    {
//        int k = 0;
//        for (k = 0; k < i - 1; k++)
//        {
//            if (stu[k].score < stu[k + 1].score)
//            {
//                struct stu temp = { 0 };
//                temp = stu[k];
//                stu[k] = stu[k + 1];
//                stu[k + 1] = temp;
//            }
//        }
//    }
//    int count = 0;
//    for (j = 0; j < i; j++)
//    {
//        if (stu[j].score == stu[0].score)
//        {
//            count++;
//        }
//    }
//    if (count > 1)
//    {
//        printf("Max is %d,name have ", stu[0].score);
//    }
//    else
//    {
//        printf("Max is %d,name has ", stu[0].score);
//    }
//    for (j = 0; j < count; j++)
//    {
//        if (j < count - 1)
//        {
//            printf("%s,"stu[j].name);
//        }
//        else
//        {
//            printf("%s", stu[j].name);
//        }
//    }
//    int count2 = 0;
//    for (j = 0; j < i; j++)
//    {
//        if (stu[j].score == stu[i - 1].score)
//        {
//            count2++;
//        }
//    }
//    if (count2 > 1)
//    {
//        printf("Min is %d,name have ", stu[i - 1].score);
//    }
//    else
//    {
//        printf("Min is %d,name has ", stu[i - 1].score)
//    }
//    for (j = i - 1 - count2; j < i; j++)
//    {
//        if (j < i - 1)
//        {
//            printf("%s,"stu[j].name);
//        }
//        else
//        {
//            printf("%s", stu[j].name);
//        }
//    }
//
//    return 0;
////}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        printf("%d", n);
//        int i = 0;
//        int temp = n;
//        while (temp)
//        {
//            temp = temp / 10;
//            i++;
//        }
//        if (i == 1)
//        {
//            printf(" has one number,is %d\n", n);
//        }
//        else
//        {
//            printf(" have ");
//            switch (i)
//            {
//            case 2:
//                printf("two ");
//                break;
//            case 3:
//                printf("three ");
//            case 4:
//                printf("four ");
//            case 5:
//                printf("five ");
//            case 6:
//                printf("six ");
//            case 7:
//                printf("seven ");
//            case 8:
//                printf("eight ");
//            case 9:
//                printf("nine ");
//            case 10:
//                printf("ten ");
//            }
//            printf("numbers,are ");
//            while (n)
//            {
//                if (n / 10 > 0)
//                {
//                    printf("%d,", n % 10);
//                }
//                else
//                {
//                    printf("%d\n", n % 10);
//                }
//                n = n / 10;
//            }
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    double x = 0.0;
//    while (scanf("%lf",&x) != EOF)
//    {
//        if (x < 0)
//        {
//            double result = (x + 1) * (x + 1) + 2 * x + 1.0 / x;
//            printf("f(%.2lf)=%.2lf\n", x, result);
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    char c = 0;
//    while (scanf("%d %d %c", &a, &b, &c) != EOF)
//    {
//        if (c == '+')
//        {
//            printf("%d+%d=%d\n", a, b, a + b);
//        }
//        else if (c == '-')
//        {
//            printf("%d-%d=%d\n", a, b, a - b);
//        }
//        else if (c == '*')
//        {
//            printf("%d*%d=%d\n", a, b, a * b);
//        }
//        else if (c == '/')
//        {
//            printf("%d/%d=%d\n", a, b, a / b);
//        }
//        else if (c == '%')
//        {
//            printf("%d % %d=%d\n", a, b, a % b);
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int time1 = 0;
//    int time2 = 0;
//    while (scanf("%d %d", &time1, &time2) != EOF)
//    {
//        int hour1 = 0;
//        int hour2 = 0;
//        int minue1 = 0;
//        int minue2 = 0;
//        hour1 = time1 / 100;
//        minue1 = time1 % 100;
//        hour2 = time2 / 100;
//        minue2 = time2 % 100l;
//        int hour = hour2 - hour1;
//        int minue = minue2 - minue1;
//        if (minue == 0)
//        {
//            printf("The train journey time is %d hours.\n", hour);
//        }
//        else if (hour == 0)
//        {
//            printf("The train journey time is %d minutes.\n", minue);
//        }
//        else
//        {
//            if (minue > 0)
//            {
//                printf("The train journey time is %d hours %d minutes.\n", hour, minue);
//            }
//            else
//            {
//                if (hour - 1 > 0)
//                {
//                    printf("The train journey time is %d hours %d minutes.\n", hour - 1, minue + 60);
//                }
//                else
//                {
//                    printf("The train journey time is %d minutes.\n", minue + 60);
//                }
//            }
//
//        }
//
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        int arr[4] = { 0 };
//        int i = 0;
//        for (i = 0; i < 4; i++)
//        {
//            arr[i] = a % 10;
//            a /= 10;
//        }
//        for (i = 0; i < 4; i++)
//        {
//            arr[i] += 9;
//            arr[i] %= 10;
//        }
//        int temp = 0;
//        temp = arr[3];
//        arr[3] = arr[1];
//        arr[1] = temp;
//        temp = arr[2];
//        arr[2] = arr[0];
//        arr[0] = temp;
//        for (i = 0; i < 4; i++)
//        {
//            printf("%d", arr[i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int m = 0;
//    int n = 0;
//    while (scanf("%d %d", &m, &n) != EOF)
//    {
//        int p = 0;
//        int a = m;
//        int b = n;
//        while (b != 0)
//        {
//            p = a % b;
//            a = b;
//            b = p;
//        }
//        int bei = 0;
//        bei = m * n / a;
//        printf("The lowest common multiple of %d and %d is %d.\n", m, n, bei);
//        printf("The greatest common divisor of %d and %d is %d.\n", m, n, a);
//        printf("\n");
//    }
//    return 0;
//
//}
//#include <math.h>
//#include <stdio.h>
//int main()
//{
//    int arr[100] = {0};
//    int i = 0;
//    while(scanf("%d",&arr[i])!=EOF)
//    {
//        for(i=1;i<100;i++)
//        {
//            scanf("%d",&arr[i]);
//            if(arr[i]<=0)
//            {
//                break;
//            }
//        }
//        int j = 0;
//        int sum  = 0;
//        for(j=0;j<i;j++)
//        {
//            int k = 0;
//            int m = 0;
//            for(k=2;k<arr[j]; k++)
//            {
//                if(arr[j]%k==0)
//                {
//                    m = 1;
//                }
//            }
//            if(!m)
//            {
//                sum += arr[j];
//            }
//        }
//        printf("%d\n",sum);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int arr[100] = { 0 };
//    int i = 0;
//    while (scanf("%d", &arr[i]) != EOF)
//    {
//        for (i = 1; i < 100; i++)
//        {
//            scanf("%d", &arr[i]);
//            if (arr[i] <= 0)
//            {
//                break;
//            }
//        }
//        int j = 0;
//        int sum = 0;
//        for (j = 0; j < i; j++)
//        {
//            int k = 0;
//            int m = 0;
//            for (k = 2; k < arr[j]; k++)
//            {
//                if (arr[j] % k == 0)
//                {
//                    m = 1;
//                }
//            }
//            if (!m)
//            {
//                sum += arr[j];
//            }
//        }
//        printf("%d\n", sum);
//        i = 0;
//    }
//    return 0;
////}
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int n = 0;
//    while (scanf("%d %d", &a, &n) != EOF)
//    {
//        int i = 0;
//        int sum = 0;
//        for (i = 1; i <= n; i++)
//        {
//            int j = 0;
//            for (j = 1; j < i; j++)
//            {
//                a = a * 10 + a;
//            }
//            sum = sum + a;
//        }
//        printf("%d\n", sum);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int n = 0;
//    while (scanf("%d %d", &a, &n) != EOF)
//    {
//        int m = 0;
//        int sum = 0;
//        int temp = a;
//        for (m = 1; m <= n; m++)
//        {
//            sum = sum + temp;
//            temp = temp * 10 + a;
//
//        }
//        printf("%d\n", sum);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int n = 0;
//    while (scanf("%d %d", &a, &n) != EOF)
//    {
//        int bmt = a;
//        int i = 0;
//        int sum = 0;
//        for (i = 1; i <= n; i++)
//        {
//            int j = 0;
//            a = bmt;
//            for (j = 1; j < i; j++)
//            {
//                a = a * 10 + bmt;
//            }
//            sum = sum + a;
//        }
//        printf("%d\n", sum);
//    }
//    return 0;
//}