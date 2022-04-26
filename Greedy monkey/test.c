#include <stdio.h>
int main()
{
    int input = 0;
    int output = 1;
    scanf("%d", &input);
    input--;
    for (; input > 0; input--)
    {
        output += input;
        output *= 2;
    }
    if (output != 1)
        printf("The monkey got %d peaches in first day.\n", output);
    else
        printf("The monkey got %d peach in first day.\n", output);
    return 0;
}