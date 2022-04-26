#include <stdio.h>
int main()
{
    char a = getchar();
    char b = a;
    int count = 0;
    for (;;)
    {
        a = getchar();
        if (a == '\n')
        {
            if (count + 1 != 1)
                printf("%d%c", count + 1, b);
            else
                printf("%c", b);
            break;
        }
        count++;
        if (a != b)
        {
            if (count != 1)
                printf("%d%c", count, b);
            else
                printf("%c", b);
            count = 0;
        }
        b = a;
    }
    printf("\n");
    return 0;
}