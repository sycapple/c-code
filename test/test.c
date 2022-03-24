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
