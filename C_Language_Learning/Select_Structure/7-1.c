#include <stdio.h>

int main()
{
    int year, month, day;
    int days = 0;
    int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d/%d/%d", &year, &month, &day);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        month_days[1] = 29;
    for (int i = 0; i < month - 1; i++)
        days += month_days[i];
    days += day;
    printf("%d", days);
    return 0;
}