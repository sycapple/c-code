#include <stdio.h>
int main()
{
    int a, b, c, d, begin, end;
    for (;;)
    {
        int counter = 0;
        scanf("%d%d", &begin, &end);
        if (begin == end && begin == 0)
            break;
        if (begin < 1000 || end < 1000 || begin > end)
        {
            printf("Error\n");
            continue;
        }
        for (; begin <= end; begin++)
        {
            a = begin / 1000;
            b = begin / 100 - a * 10;
            d = begin % 10;
            c = (begin % 100 - d) / 10;
            if (a != b && a != c && a != d && b != c && b != d && c != d && d % 2 == 0)
                printf("%d  ", begin), counter++;
        }
        printf("\ncounter=%d\n", counter);
    }
    return 0;
}