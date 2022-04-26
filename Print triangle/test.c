#include <stdio.h>
int main()
{
    int begin = 0;
    int row = 0;
    scanf("%d%d", &begin, &row);
    int k = begin;
    for (int i = 0; i < row; i++)
    {
        for (int j = 1; j < row - i + 1; j++)
        {
            if (k == 10)
                k = 0;
            if (i == 0)
                printf("%d", k++);
            else
            {
                begin = k - 1;
                if (j == 1)
                    printf("%d", (begin + 2 * row - 2 - i) % 10);
                else if (j == row - i)
                {
                    printf("%d", (begin + i) % 10);
                    break;
                }
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}