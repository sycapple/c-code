#include <stdio.h>
int main()
{
    int num = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        int year, month, day;
        long int sum = 0;
        int data[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        scanf("%d%d%d", &year, &month, &day);
        for (int j = 1990; j < year; j++)
        {
            if ((j % 4 == 0 && j % 100 != 0) || j % 400 == 0)
                sum += 366;
            else
                sum += 365;
        }
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            data[1] = 29;
        for (int j = 0; j < month - 1; j++)
        {
            sum += data[j];
        }
        sum += day;
        if (sum % 5 < 4 && sum % 5 > 0)
            printf("He was fishing on %d.%d.%d\n", year, month, day);
        else
            printf("He was basking on %d.%d.%d\n", year, month, day);
    }
    return 0;
}