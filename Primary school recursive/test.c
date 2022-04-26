#include <stdio.h>
int sum(int a, int b);
int sum(int a, int b)
{
    if (a < b)
        return a + sum(a + 1, b);
    else if (a == b)
        return b;
}
int main()
{
    int input1, input2;
    scanf("%d%d", &input1, &input2);
    printf("The sum from %d to %d is %d.\n", input1, input2, sum(input1, input2));
    return 0;
}