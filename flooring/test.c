#include <stdio.h>
#define MAX 20
int cumulative(int input);
Print(int output[MAX][MAX], int input);
int main()
{
    int output[MAX][MAX] = {0};
    int input = 0;
    scanf("%d", &input);
    int a, b;
    for (a = 0; a < input; a++)
    {
        for (b = 0; b < input; b++)
        {
            int max = a > b ? a : b;
            if ((max + 1) % 2 == 0)
                output[a][b] = cumulative(max) + ((a + 1) < (b + 1) ? (a + 1) : (b + 1));
            else
                output[a][b] = cumulative(max) + ((a + 1) < (b + 1) ? (a + 1) : (b + 1));
        }
    }
    Print(output, input);
    return 0;
}
int cumulative(int input)
{
    int output = 0;
    for (int i = 0; i < input; i++)
    {
        output += i + 1;
    }
    return output;
}
Print(int output[MAX][MAX], int input)
{
    for (int a = 0; a < input; a++)
    {
        for (int b = 0; b < input; b++)
        {
            if (b == input - 1)
                printf("%d\n", output[a][b]);
            else
                printf(" %d ", output[a][b]);
        }
    }
}
