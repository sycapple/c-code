#include <stdio.h>
int main()
{
    int input = 0;
    int Input[10] = {0};
    int num = 0;
    scanf("%d", &input);
    for (int i = 0; input > 0; i++)
    {
        Input[i] = input % 10;
        input /= 10;
        num = i + 1;
    }
    for (int i = 0; i < num; i++)
    {
        int max = 0;
        for (int j = 0; j < num; j++)
        {
            max = Input[j] > Input[max] ? j : max;
        }
        printf("%d", Input[max]);
        Input[max] = 0;
    }
    printf("\n");
    return 0;
}