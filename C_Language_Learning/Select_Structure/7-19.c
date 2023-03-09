#include <stdio.h>
#include <string.h>

int main()
{
    char s[10];
    scanf("%s", s);
    int len = strlen(s);
    int year, month;

    if (len == 4)
    {
        year = (s[0] - '0') * 10 + s[1] - '0';
        (year < 22) ? (year += 2000) : (year += 1900);
        month = (s[2] - '0') * 10 + s[3] - '0';
    }
    else if (len == 6)
    {
        year = (s[0] - '0') * 1000 + (s[1] - '0') * 100 + (s[2] - '0') * 10 + s[3] - '0';
        month = (s[4] - '0') * 10 + s[5] - '0';
    }
    printf("%04d-%02d", year, month);
}