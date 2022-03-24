#include <stdio.h>
int main()
{
    int input = 0;
    int sum;
    for (;;)
    {
        int arr[60] = {0};
        sum = 0;
        if (scanf("%d", &input) == EOF)
            break;
        for (int i = 1; i < 100; i++)
        {
            sum += i;
            arr[sum]++;
            sum %= input;
        }
        for (int i = 1; i < input; i++)
        {
            if (arr[i] == 0)
                printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}