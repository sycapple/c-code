#include <stdio.h>
int main()
{
    int year, month, day, date;
    int num[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d%d%d%d", &year, &month, &day, &date);
    for (;;)
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            num[1] = 29;
        else
            num[1] = 28;
        if (month == 13)
        {
            month = 1;
            year++;
        }
        else if (date + day > num[month - 1])
        {
            date -= num[month - 1] - day + 1;
            month++;
            day = 1;
        }
        else
        {
            day += date;
            break;
        }
    }
    printf("%d.%d.%d\n", year, month, day);
    return 0;
}
