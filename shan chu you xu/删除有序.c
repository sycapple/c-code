#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define NUM 31
int main()
{
    int a = 1;
    while (a)
    {
        scanf("%d", &a);
        //reorderedPowerOf2(a);
        if (reorderedPowerOf2(a))
        {
            printf("是\n");
        }
        else
        {
            printf("否\n");
        }
    }
    system("pause");
    return 0;
}
int reorderedPowerOf2(int n)
{
    int num[10] = { 0 };
    int judge[NUM] = { 0 };
    int num1[10] = { 0 };
    int b = 0;
    int m = 0;
    for (; n > 0;)
    {
        num[n % 10]++;
        n /= 10;
    }
    for (int j = 0; j < NUM; j++)
    {
        int a = 1;
        for (int i = 0; i < j; i++)
        {
            a *= 2;
        }
        printf("2的%d次幂为：%d\n", j, a);
        for (; a > 0;)
        {
            num1[a % 10]++;
            printf("num1[%d]=%d\n", a % 10, num1[a % 10]);
            a /= 10;
        }
        for (int i = 9; i >= 0; i--)
        {
            if (num1[i] >0)
            {
                judge[m] = judge[m] * 10 + i;
                num1[i]--;
                i++;
            }
        }
        printf("judge[m]=%d\n", judge[m]);
        m++;
    }
    for (int i = 9; i >= 0; i--)
    {
        if (num[i] != 0)
            b = b * 10 + i;
    }
    //printf("%d\n", b);
    for (int i = NUM; i > 0; i--)
    {
        if (judge[i] == b)
            return 1;
    }
    return 0;



}