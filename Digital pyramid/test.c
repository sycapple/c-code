#include <stdio.h>
int main()
{
    int input = 0;
    scanf("%d", &input);
    for (int i = 0; i < input; i++)
    {
        int m = 1;
        for (int j = 0; j < input + i; j++)
        {
            if (j < input - i - 1)
                printf("  ");
            else if (j + 1 < input)
                printf("%2d", m), m++;
            else
                printf("%2d", m), m--;
        }
        printf("\n");
    }
    return 0;
}