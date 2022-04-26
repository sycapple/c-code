#include <stdio.h>
#define day 13
int main()
{
    int Year = 0;
    int data[12] = {0};
    int sum = 0;
    scanf("%d", &Year);
    for (int i = 0; i < 12; i++)
    {
        int y, c;
        int year = Year;
        int month = i + 1;
        if (month == 1 || month == 2)
        {
            month += 12;
            year--;
        }
        y = year % 100;
        c = year / 100;
        data[i] = (c / 4 - 2 * c + y + y / 4 + 13 * (month + 1) / 5 + day - 1) % 7;
        if (data[i] == 5)
            sum++;
    }
    if (sum == 1)
    {
        printf("There is %d Black Friday in year %d.\nIt is:\n", sum, Year);
        for (int i = 0; i < 12; i++)
            if (data[i] == 5)
                printf("%d/%d/%d\n", Year, i + 1, day);
    }
    else
    {
        printf("There are %d Black Fridays in year %d.\nThey are:\n", sum, Year);
        for (int i = 0; i < 12; i++)
            if (data[i] == 5)
                printf("%d/%d/%d\n", Year, i + 1, day);
    }
    return 0;
}
