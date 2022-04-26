#include <stdio.h>
int check(int *a)
{
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > a[i + 1])
            return 0;
    }
    return 1;
}
int main()
{
    int a[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("------------------------------------------------------------\n");
    for (int i = 0; i < 10; i++)
    {
        int k = a[i];
        for (int j = 0; j < i; j++)
        {
            if (a[j] > k)
            {
                int m = i;
                for (; m > j; m--)
                {
                    a[m] = a[m - 1];
                }
                a[m] = k;
                break;
            }
        }
        switch (check(a))
        {
        case 0:
            break;
        case 1:
            break;
        default:
            break;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
    system("pause");
    return 0;
}