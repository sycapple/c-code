#include <stdio.h>
int factorial(int n)
{
    int m = 1;
    for (int i = 1; i <= n; i++)
    {
        m *= i;
    }
    return m;
}
int kInversePairs(int n, int k)
{
    int sum = 0;
    float judge = (float)k / 2;
    int num = n / 2;
    if (k = 0 || n / 2 < k)
        return 0;
    if (judge - (int)judge == 0)
    {
        for (int i = 1; i <= num; i++)
        {
            sum += i;
        }
        return sum;
    }
    else
    {
        for (int i = 1; i < num; i++)
        {
            sum += (factorial(num - 1) / (factorial(i) * factorial(num - 1 - i)));
        }
        return sum + num;
    }
}
int main()
{
    int n = 0;
    int k = 0;
    printf("请输入n  k\n");
    scanf("%d%d", &n, &k);
    printf("所有包含从 1 到 n 的数字，且恰好拥有 k 个逆序对的不同的数组的个数为%d\n", kInversePairs(n, k));
    system("pause");
    return 0;
}
