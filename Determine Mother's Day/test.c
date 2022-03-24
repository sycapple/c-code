#include <stdio.h>
int main()
{
    int year;
    int y, c;
    int week = 0;
    scanf("%d", &year);
    y = year % 100;
    c = year / 100;
    week = ((c / 4 - 2 * c + y + y / 4 + 13 * (5 + 1) / 5 + 1 - 1) % 7);
    if (week == 0)
        printf("8\n");
    else
        printf("%d\n", 14 - week);
    return 0;
}