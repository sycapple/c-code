#include <stdio.h>
int main()
{
    char input1;
    int input2;
    scanf("%c,%d", &input1, &input2);
    for (int i = 0; i < input2; i++)
    {
        for (int j = 0; j < input2 + i; j++)
        {
            if (j == input2 - i - 1 || j == input2 + i - 1)
                printf("%c", (input1 + i - 65) % 26 + 65);
            else
                printf(" ");
        }
        printf("\n");
    }
    for (int i = input2 - 2; i > -1; i--)
    {
        for (int j = 0; j < input2 + i; j++)
        {
            if (j == input2 - i - 1 || j == input2 + i - 1)
                printf("%c", (input1 + i - 65) % 26 + 65);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}