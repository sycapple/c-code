#include <stdio.h>
int main()
{
    int max = 0;
    int data[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &data[i]);
        max = data[i] > max ? data[i] : max;
    }
    for (int i = 0; i < 10; i++)
        if (data[i] == max)
            printf("%d\n", i + 1);
    return 0;
}