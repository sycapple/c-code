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
//     y = year % 100;
//     c = year / 100;
//     printf("%d\n", (c / 4 - 2 * c + y + y / 4 + 13 * (month + 1) / 5 + day - 1) % 7);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int hour, min;
//     float H, M;
//     float ouput;
//     scanf("%d%d", &hour, &min);
//     H = (float)(hour % 12) * 30 + (float)min / 60 * 30;
//     M = (float)min / 60 * 360;
//     if (min < 10)
//         printf("At %d:0%d the angle is %.1f degrees.\n", hour, min, H - M >= 0 ? H - M : M - H);
//     else
//         printf("At %d:%d the angle is %.1f degrees.\n", hour, min, H - M >= 0 ? H - M : M - H);
//     return 0;
// }
// #include <stdio.h>
// int multiply(int a, int b);
// int main()
// {
//     int arr[10];
//     int input;
//     int count;
//     scanf("%d", &input);
//     for (int i = multiply(input - 1, 10); i < multiply(input, 10); i++)
//     {
//         int j = 0;
//         int m = i;
//         for (; m > 0; j++)
//         {
//             arr[j] = m - m / 10 * 10;
//             m /= 10;
//         }
//         int result = 0;
//         for (; j >= 0; j--)
//         {
//             result += multiply(input, arr[j]);
//         }
//         if (i == m)
//         {
//             printf("%d\n", m);
//             count++;
//         }
//     }
//     if (count == 0)
//         printf("No output.\n");
//     return 0;
// }
// int multiply(int a, int b)
// {
//     int output = 1;
//     for (int j = 0; j < a; j++)
//         output *= b;
//     return output;
// }
#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d ", &a);
    b = 1;
    for (int j = 0; j < a; j++)
    {
        for (int i = 0; i < a; i++)
        {
            printf("%d", b);
            b++;
        }
        printf("\n");
    }
    return 0;
}