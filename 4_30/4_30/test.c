#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void  tm(int n, int* count)
//{
//    if (n == 1)
//    {
//        (*count) += 2;
//    }
//    else {
//        tm(n - 1, count);
//        (*count)++;
//        tm(n - 1, count);
//        (*count)++;
//        tm(n - 1, count);
//    }
//}
//int main()
//{
//    int count = 0;
//    int n = 0;
//    scanf("%d", &n);
//    tm(n, &count);
//    printf("%d", count);
//    return 0;
//}
//void move(char pos1, char pos2)
//{
//	printf(" %c->%c ", pos1, pos2);
//}
//void hannuo(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		move(a, c);
//	}
//	else
//	{
//		hannuo(n - 1, a, c, b);
//		move(a, c);
//		hannuo(n - 1, b, a, c);
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	hannuo(n, 'a', 'b', 'c');
//	return 0;
//}
//void move(char pos1, char pos2,int* count)
//{
//	printf(" %c->%c ", pos1, pos2);
//	(*count)++;
//}
//void hanuo(int n, int* count, char pos1, char pos2, char pos3)
//{
//	if (n == 1)
//	{
//		move(pos1, pos3,count);
//	}
//	else
//	{
//		hanuo(n - 1, count, pos1, pos2, pos3);
//		move(pos1, pos2,count);
//		hanuo(n - 1, count, pos3, pos2, pos1);
//		move(pos2, pos3,count);
//		hanuo(n - 1, count, pos1, pos2, pos3);
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int  count = 0;
//	scanf("%d", &n);
//	hanuo(n, &count, 'a', 'b', 'c');
//	printf("\n");
//	printf("%d", count);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d %d", &m, &n);
//    int a[100][100] = { 0 };
//    int b[100][100] = { 0 };
//    int i = 0;
//    for (i = 0; i < m; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &b[i][j]);
//        }
//    }
//    float count = 0.0f;
//    for (i == 0; i < m; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            if (a[i][j] == b[i][j])
//            {
//                count++;
//            }
//        }
//    }
//    double per = count / (n * n * 100.0);
//    printf("%.2lf", per);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[10][10] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int m = 1;
//    int k = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            if (j == k)
//            {
//                break;
//            }
//            else {
//                if (arr[i][j] != 0)
//                {
//                    m = 0;
//                }
//            }
//        }
//        k++;
//    }
//    if (m)
//    {
//        printf("YES");
//    }
//    else {
//        printf("NO");
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int arr[10][10] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d ", &arr[i][j]);
//        }
//    }
//    int k = 0;
//    scanf("%d", &k);
//    for (i = 0; i < k; i++)
//    {
//        char t = 0;
//        int a = 0;
//        int b = 0;
//        getchar();
//        scanf("%c %d %d", &t, &a, &b);
//        if (t == 'r')
//        {
//            int j = 0;
//            for (j - 0; j < m; j++)
//            {
//                arr[n + 1][j] = arr[a][j];
//                arr[a][j] = arr[b][j];
//                arr[b][j] = arr[n + 1][j];
//            }
//        }
//        else if (t == 'c')
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                arr[j][m + 1] = arr[j][a];
//                arr[j][a] = arr[j][b];
//                arr[j][b] = arr[j][m + 1];
//            }
//        }
//
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (k = 0; j < m; j++)
//            {
//                printf("%d ", arr[i][j]);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int arr[10][10] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d ", &arr[i][j]);
//        }
//    }
//    int k = 0;
//    scanf("%d", &k);
//    getchar();
//    for (i = 0; i < k; i++)
//    {
//        char t = 0;
//        int a = 0;
//        int b = 0;
//
//        scanf("%c %d %d", &t, &a, &b);
//        getchar();
//        if (t == 'r')
//        {
//            int j = 0;
//            for (j = 0; j < m; j++)
//            {
//                arr[n + 1][j] = arr[a - 1][j];
//                arr[a - 1][j] = arr[b - 1][j];
//                arr[b - 1][j] = arr[n + 1][j];
//            }
//        }
//        else if (t == 'c')
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                arr[j][m + 1] = arr[j][a - 1];
//                arr[j][a - 1] = arr[j][b - 1];
//                arr[j][b - 1] = arr[j][m + 1];
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (k = 0; j < m; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    getchar();
//    char arr[100][100] = { 0 };
//    for (i = 1; i <= n; i++)
//    {
//        int j = 0;
//        for (j = 1; j <= m; j++)
//        {
//            scanf("%c", &arr[i][j]);
//        }
//        getchar();
//    }
//    for (i = 1; i <= n; i++)
//    {
//        int j = 0;
//        for (j = 1; j <= m; j++)
//        {
//            if (arr[i][j] == '*')
//            {
//                printf("%c", arr[i][j]);
//            }
//            else {
//                int x = i - 1;
//                int count = 0;
//                while (x <= i + 1)
//                {
//                    int y = j - 1;
//                    while (y <= j + 1)
//                    {
//                        if (arr[x][y] == '*')
//                        {
//                            count++;
//                        }
//                        y++;
//                    }
//                    x++;
//                }
//                printf("%d", count);
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}
#include <stdio.h>
#include <string.h>
int main()
{
    char name[20] = { 0 };
    char passord[20] = { 0 };
    while (scanf("%s %s", name, passord) != EOF)
    {
        if (strcmp(name, "admin") && strcmp(passord, "admin"))
        {
            printf("Login Success!");
        }
        else {
            printf("Login Fail!");
        }
    }
    return 0;
}