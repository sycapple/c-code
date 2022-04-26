#include <stdio.h>
double Sum(int n, int start);
double Sum(int n, int start)
{
    if (n > 0)
        return 1.0 / start + Sum(n - 1, start + 1);
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("sum=%lf\n", Sum(n, 1));
    return 0;
}