#include <stdio.h>

typedef struct
{
    char hour, minute, second;
} MYTIME;

int IsValidTime(int hour, int minute, int second);
void TimeSet(MYTIME *time, int hour, int minute, int second);

int main()
{
    MYTIME a = {12, 15, 30};
    int h, m, s;
    scanf("%d %d %d", &h, &m, &s);
    TimeSet(&a, h, m, s);
    printf("%d %d %d\n", a.hour, a.minute, a.second);
    return 0;
}

void TimeSet(MYTIME *time, int hour, int minute, int second)
{
    if (IsValidTime(hour, minute, second))
    {
        time->hour = hour;
        time->minute = minute;
        time->second = second;
    }
    else
        puts("不正确的参数!");
}