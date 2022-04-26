#include <stdio.h>

// 声明函数原型
int leap_year(int);
int year_days(int);
int days(int, int, int);

int leap_year(int year) // 判断闰年或平年
{
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 1 : 0;
}

int year_days(int year) // 计算一整年的天数
{
    return leap_year(year) ? 366 : 365;
}

int days(int year, int month, int day) // 计算该天month,day 是本年year的第几天
{
    int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, i;

    if (leap_year(year) && month > 2)
        day++;

    for (i = 1; i < month; i++)
        day += months[i];

    return day;
}
int main()
{
    int year1, month1, day1, year2, month2, day2;
    scanf("%d%d%d", &year1, &month1, &day1);
    scanf("%d%d%d", &year2, &month2, &day2);
    int sum = 0;
    for (int i = year1 + 1; i < year2 + 1; i++)
    {
        sum += year_days(i);
    }
    printf("%d days\n", leap_year(year1) - days(year1, month1, day1) + sum + days(year2, month2, day2));
    return 0;
}