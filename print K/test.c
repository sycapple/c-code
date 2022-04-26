#include <stdio.h>
int main()
{
    char input1;
    int input2;
    scanf("%c,%d", &input1, &input2);
    for (int i = 1; i < input2; i++)
    {
        for (int j = 0; j < input2 + 2 - i; j++)
        {
            if (j == 0)
                printf("%c", input1 + i - 1);
            else if (j == input2 + 1 - i)
                printf("%c\n", input1 + i - 1);
            else
                printf(" ");
        }
    }
    printf("%c\n", input1 + input2 - 1);
    for (int i = input2 + 1; i <= input2 * 2 - 1; i++)
    {
        for (int j = 0; j < i - input2 + 2; j++)
        {
            if (j == 0)
                printf("%c", input1 + i - 1);
            else if (j == i - input2 + 1)
                printf("%c\n", input1 + i - 1);
            else
                printf(" ");
        }
    }
    return 0;
}