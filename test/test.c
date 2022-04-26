// // // #include <stdio.h>
// // // #include <math.h>
// // // #define YEAR 365
// // // int main()
// // // {
// // //     int date[3] = {0};
// // //     int day;
// // //     scanf("%d", &date[0], &date[1], &date[2]);
// // //     if (date[1] > 2)
// // //         day = (date[0] - 1900) * YEAR + (date[1] - 1) * 30 - 2 + ceil((float)date[1] / 2 + date[2]) - 1;
// // //     else if (date[1] == 2)
// // //         day = (date[0] - 1900) * YEAR + 31 + date[2] - 1;
// // //     else
// // //         day = (date[0] - 1900) * YEAR + date[2] - 1;
// // //     printf("%d\n", (day % 7 + 1) % 7);
// // //     return 0;
// // // }
// // // #include <stdio.h>
// // // int multiply(int a, int b);
// // // int main()
// // // {
// // //     int arr[10] = {0};
// // //     int input;
// // //     int count;
// // //     scanf("%d", &input);
// // //     for (int i = multiply(input - 1, 10); i < multiply(input, 10); i++)
// // //     {
// // //         int j = 0;
// // //         int m = i;
// // //         for (; m > 0; j++)
// // //         {
// // //             arr[j] = m - m / 10 * 10;
// // //             m /= 10;
// // //         }
// // //         int result = 0;
// // //         for (; j >= 0; j--)
// // //         {
// // //             result += multiply(input, arr[j]);
// // //         }
// // //         if (i == result)
// // //         {
// // //             printf("%d\n", i);
// // //             count++;
// // //         }
// // //     }
// // //     if (count == 0)
// // //         printf("No output.\n");
// // //     return 0;
// // // }
// // // int multiply(int a, int b)
// // // {
// // //     int output = 1;
// // //     for (int j = 0; j < a; j++)
// // //         output *= b;
// // //     return output;
// // // }
// // // #include <stdio.h>
// // // int main()
// // // {
// // //     int a = 0;
// // //     int b = 0;
// // //     scanf("%d", &a);
// // //     b = 1;
// // //     for (int j = 0; j < a; j++)
// // //     {
// // //         for (int i = 0; i < a; i++)
// // //         {
// // //             if (b < 10)
// // //                 printf("  %d", b);
// // //             else
// // //                 printf(" %d", b);
// // //             b++;
// // //         }
// // //         printf("\n");
// // //     }
// // //     return 0;
// // // }
// // // #include <stdio.h>
// // // int main()
// // // {
// // //     int a = 0;
// // //     int b = 1;
// // //     int compare = 0;
// // //     scanf("%d", &a);
// // //     for (; compare < a; b++)
// // //     {
// // //         compare += b;
// // //     }
// // //     printf("%d\n", b - 1);
// // //     return 0;
// // // }
// // #include <stdio.h>
// // int main()
// // {
// //     int n, y, r;
// //     int all;
// //     int yue = 0;
// //     int i;
// //     int day;
// //     scanf("%d%d%d", &n, &y, &r);
// //     int arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
// //     for (i = 0; i < y - 1; i++)
// //     {
// //         yue += arr[i];
// //     }
// //     yue += r;
// //     if ((y > 2 || (y == 2 && r == 29)) && (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)))
// //         yue++;
// //     all = 365 * (n - 1900) + yue;
// //     for (i = 1900; i < n; i++)
// //     {
// //         if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
// //             all++;
// //     }
// //     day = all % 7;
// //     printf("%d\n", day);
// //     return 0;
// // }
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int n, m, j, k, o, h;
//     scanf("%d", &n);
//     if (n == 2)
//         printf("No output.\n");
//     else
//     {
//         m = pow(10, n);
//         j = m/10;
//         h = j;
//         o = 0;

//         while (j < m)
//         {
//             do
//             {
//                 k = h * 10 / m;
//                 h = h - k * m / 10;
//                 m = m / 10;
//                 o = o + pow(k, n);
//             } while (m != 0);
//             if (o == j)
//             {
//                 printf("%d\n", j);
//                 j = j + 1;
//                 h = j;
//                 o = 0;
//                 m = pow(10, n);
//             }
//             else
//             {
//                 j = j + 1;
//                 h = j;
//                 o = 0;
//                 m = pow(10, n);
//             }
//         }
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int year;
//     int week = 0;
//     scanf("%d", &year);
//     week = (1 + 2 * 5 + 3 * (5 + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
//     if (week == 0)
//         printf("8\n");
//     else
//         printf("%d\n", 14 - week);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int year, month, day;
//     int y, c;
//     scanf("%d%d%d", &year, &month, &day);
//     if (month == 1 || month == 2)
//     {
//         month += 12;
//         year--;
//     }
//     printf("%d\n", (day + 2*month + 3*(month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7);
//     return 0;
// }
// #include <stdio.h>
// #define ROWS 11
// #define COLS 11
// void Show_mine(char mine[ROWS][COLS], char show_mine[ROWS][COLS], int row, int col)
// {
//     int i, j;
//     for (i = 1; i <= row; i++)
//     {
//         for (j = 1; j <= col; j++)
//         {
//             show_mine[i][j] = mine[i - 1][j] + mine[i - 1][j - 1] + mine[i][j - 1] + mine[i + 1][j - 1] + mine[i + 1][j] + mine[i + 1][j + 1] + mine[i][j + 1] + mine[i - 1][j + 1] - 8 * '0' + '0';
//         }
//     }
// }
// #include <stdio.h>
// int main()
// {
//     int sum = 400;
//     int app = 4;
//     int water = 40;
//     int pear = 2;
//     int i;
//     int j;
//     for (int i = 1; i < 90; i++)
//     {
//         for (int j = 1;; j++)
//         {
//             int left = sum;
//             int k = 0;
//             left -= i * app + j * water;
//             if (left <= 0)
//                 break;
//             k = left / pear;
//             if (i + j + k == 100)
//                 printf("x=%d,y=%d,z=%d\n", i, j, k);
//         }
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//     int year, month, day;
//     int sum = 0;
//     int i;
//     scanf("%d,%d,%d", &year, &month, &day);
//     if (year % 4 == 0 )
//         arr[1] = 29;
//         for (i = 0; i < month - 1; i++)
//         {
//             sum += arr[i];
//         }
//         sum += day;
//         printf("%d\n", sum);
//         return 0;
// }
// #include <stdio.h>
// int main()
// {
//     char op[2], c[100];
//     int a = 0, b = 0, max, min;
//     while (a == 0)
//     {
//         char ch = getchar();
//         if (ch == ',')
//             a = 0;
//         else if (ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9')
//         {
//             c[b] = ch - 48;
//             b++;
//         }
//         else if (ch != '=')
//             op[0] = ch;
//         else if (ch == '=')
//         {
//             op[1] = ch;
//             a++;
//         }
//         else
//             a++;
//     }
//     b--;
//     max = c[b] > c[b - 1] ? c[b] : c[b - 1];
//     min = c[b] < c[b - 1] ? c[b] : c[b - 1];
//     while (b - 2 >= 0)
//     {
//         if (c[b - 2] > max)
//         {
//             max = c[b - 2];
//             b--;
//         }
//         else if (c[b - 2] < min)
//         {
//             min = c[b - 2];
//             b--;
//         }
//         else
//             b--;
//     }
//     if (op[0] == '/' && min == 0)
//         printf("Error!\n");
//     else if (op[0] == '%' && min == 0)
//         printf("Error!\n");
//     switch (op[0])
//     {
//     case ('+'):
//         printf("%d%c%d=%d\n", max, op[0], min, max + min);
//         break;
//     case ('-'):
//         printf("%d%c%d=%d\n", max, op[0], min, max - min);
//         break;
//     case ('*'):
//         printf("%d%c%d=%d\n", max, op[0], min, max * min);
//         break;
//     case ('/'):
//         printf("%d%c%d=%d\n", max, op[0], min, max / min);
//         break;
//     case ('%'):
//         printf("%d%c%d=%d\n", max, op[0], min, max % min);
//         break;
//     }
//     return 0;
// }
// #include<stdio.h>
// #include <math.h>
// int main()
// {
//     long long a, n, i = 4, last, ori;
//     scanf("%lld%lld", &a, &n);
//     ori = pow(a, n);
//     if (ori < 1000)
//         printf("The last 3 numbers is %lld.\n", ori);
//     else
//     {
//         while (i > 0)
//         {
//             if (ori / pow(10, i) == 0)
//                 break;
//             else
//                 i++;
//         }
//         last = ori - ori / pow(10, i - 1) * pow(10, i - 1);
//         if (last == 0)
//             printf("The last 3 numbers is 000.\n");
//         else
//         {
//             while (last / 1000 != 0)
//             {
//                 last = last - last / pow(10, i - 2) * pow(10, i - 2);
//                 i--;
//             }
//             printf("The last 3 numbers is %lld.\n", last);
//         }
//     }
//     return 0;
// }#include <stdio.h>
// int mian()
// {
//     char input[5][10] = {0};
//     scanf("%s%s%s%s%s", &input[0][0], &input[1][0], &input[2][0], &input[3][0], &input[4][0]);
//     for (int i = 0; i < 5; i++)
//     {
//         int min = 0;
//         for (int j = 0; j < 5; j++)
//         {
//             if (input[j][0] < input[min][0])
//                 min = j;
//         }
//         printf("%s\n", input[min]);
//         input[min][0] = '~';
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    int judge[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};
    int year, month, day;
    int y, c;
    scanf("%d%d%d", &year, &month, &day);
    if (month < 1 || month > 12)
    {
        printf("month is error.\n");
        goto $;
    }
    if (day < 1 || day > judge[month])
    {
        printf("day is error.\n");
        goto $;
    }
    if (month == 1 || month == 2)
    {
        month += 12;
        year--;
    }
    y = year % 100;
    c = year / 100;
    printf("%d\n", (c / 4 - 2 * c + y + y / 4 + 13 * (month + 1) / 5 + day - 1) % 7);
$:
    return 0;
}