#include <stdio.h>

int main()
{
    int year, month, day;
    scanf("%d %d %d", &year, &month, &day);
    if (year < 0 || year > 5000 || month < 1 || month > 12 || day < 1 || day > 31)
        printf("wrong date");
    else
        printf("%d-%d-%d", year, month, day);
}