#include <stdio.h>
int check(int a, int b);
int main()
{
    int input1, input2;
    scanf("%d%d", &input1, &input2);
    if (check(input1, input2) && check(input2, input1))
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
int check(int a, int b)
{
    int sum = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
            sum += i;
    }
    if (sum == b)
        return 1;
    return 0;
}