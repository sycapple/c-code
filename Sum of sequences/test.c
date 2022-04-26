#include <stdio.h>
double sum(int a, int b);
double sum(int a, int b)
{
    if (b > 1)
    {
        if (b % 2 != 0)
            return -(double)(1.0 / b) + sum(a - 1, b - 1);
        else
            return (double)(1.0 / b) + sum(a - 1, b - 1);
    }
    else
        return 1.0;
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    if (n == 1)
        printf("1\n");
    else
        printf("%lf\n", sum(n - 1, n));
    return 0;
}