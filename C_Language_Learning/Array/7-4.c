#include <stdio.h>

char q[1000];

int main()
{
    int p = 0;
    while ((q[p++] = getchar()) != '\n')
        ;
    while (p >= 0)
        printf("%c", q[p--]);
}