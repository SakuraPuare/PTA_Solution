#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int year, month, day;
        int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        scanf("%d-%d-%d", &year, &month, &day);
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            days[1] = 29;
        // 计算这天的后天
        if (day + 2 <= days[month - 1])
            day += 2;
        else
        {
            day = day + 2 - days[month - 1];
            month++;
            if (month > 12)
            {
                month = 1;
                year++;
            }
        }
        printf("%04d-%02d-%02d\n", year, month, day);
    }
    
}