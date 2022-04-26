#include <stdio.h>
int main()
{
    int input[20] = {0};
    int num = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
        scanf("%d", &input[i]);
    for (int i = 0; i < num / 2; i++)
        printf("%d ", input[i] * input[num - 1 - i]);
    if (num % 2 != 0)
        printf("%d ", input[num / 2]);
    printf("\n");
    return 0;
}