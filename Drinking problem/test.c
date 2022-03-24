#include <stdio.h>
int judge(int a, int b, int c);
int main()
{
    int input = 0;
    int a, b, c;
    for (;;)
    {
        if (scanf("%d", &input) == EOF)
            break;
        else
        {
            int k = 0;
            for (int i = 1; i < (input + 2) / 3; i++)
            {
                for (int j = i; j < (input + 2 - i) / 2; j++)
                {
                    a = i + 1;
                    b = j + 1;
                    c = input + 2 - a - b;
                    if (judge(a, b, c))
                        printf("%d %d %d\n", a, b, c), k = 1;
                }
            }
            if (!k)
                printf("No solution\n");
        }
    }
    return 0;
}
int judge(int a, int b, int c)
{
    int max = (a > b ? a : b) < c ? c : (a > b ? a : b);
    for (;; max++)
    {
        if (max % a == 0 && max % b == 0 && max % c == 0)
        {
            if (max / a + max / b + max / c == max)
                return 1;
            return 0;
        }
    }
}
