#include <stdio.h>

int main()
{
    int year, month, day;
    scanf("%d/%d/%d", &year, &month, &day);
    int days = 0;
    switch (month)
    {
    case 12:
        days += 30; // 11月30天
    case 11:
        days += 31; // 10月31天
    case 10:
        days += 30; // 9月30天
    case 9:
        days += 31; // 8月31天
    case 8:
        days += 31; // 7月31天
    case 7:
        days += 30; // 6月30天
    case 6:
        days += 31; // 5月31天
    case 5:
        days += 30; // 4月30天
    case 4:
        days += 31; // 3月31天
    case 3:
        days += 28; // 2月28天
    case 2:
        days += 31; // 1月31天
    }
    days += day;

    if (month > 2 && year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        days += 1;

    printf("%d", days);

    // int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    //     month_days[1] = 29;
    // for (int i = 0; i < month - 1; i++)
    //     days += month_days[i];
    // days += day;
    // printf("%d", days);
    return 0;
}