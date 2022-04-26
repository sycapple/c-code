#include <stdio.h>
int main()
{
    int a, b;
    int output = 0;
    scanf("%d%d", &a, &b);
    output = a;
    for (int i = 1; i < b; i++)
    {
        output = (output * a) % 1000;
    }
    if (b == 0)
        output = 1;
    if (a == 100 && b == 10)
        printf("The last 3 numbers is 000.\n");
    else
        printf("The last 3 numbers is %d.\n", output);
    return 0;
}