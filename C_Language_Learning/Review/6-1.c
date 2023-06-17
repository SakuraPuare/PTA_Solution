#include <stdio.h>

int IsLeapYear(int year);
int MaxDayMonth(int year, int month);

int main()
{
    int y, m;
    scanf("%d%d", &y, &m);
    printf("%d\n", MaxDayMonth(y, m));
    return 0;
}

int IsLeapYear(int year)
{
    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
        return 1;
    else
        return 0;
}

/* 你提交的代码将被嵌在这里 */
int MaxDayMonth(int year, int month)
{
    int day;
    if (year <= 0)
        return 0;
    if (month < 1 || month > 12)
        return 0;

    switch (month)
    {
    case 1:
        day = 31;
        break;
    case 2:
        if (IsLeapYear(year))
            day = 29;
        else
            day = 28;
        break;
    case 3:
        day = 31;
        break;
    case 4:
        day = 30;
        break;
    case 5:
        day = 31;
        break;
    case 6:
        day = 30;
        break;
    case 7:
        day = 31;
        break;
    case 8:
        day = 31;
        break;
    case 9:
        day = 30;
        break;
    case 10:
        day = 31;
        break;
    case 11:
        day = 30;
        break;
    case 12:
        day = 31;
        break;
    }
    return day;
}