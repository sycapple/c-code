#include <stdio.h>
#define MIN 18
int main()
{
    int input = 0;
    scanf("%d", &input);
    for (int i = MIN;; i += MIN)
    {
        int a, b, c;
        a = i / 1.8;
        b = i / 1.5;
        c = i / 2;
        if (i / 1.8 * 0.1 + i / 1.5 * 0.5 + i / 2 * 1 == input * 10)
        {
            printf("%d,%d,%d\n", a, b, c);
            break;
        }
        else if (i / 1.8 * 0.1 + i / 1.5 * 0.5 + i / 2 * 1 > input * 10)
        {
            printf("No change.\n");
            break;
        }
    }
    return 0;
}