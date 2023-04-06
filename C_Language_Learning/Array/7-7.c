#include <stdio.h>

char q[1000];

int main()
{
    scanf("%s", q);
    char a, b;
    scanf(" %c %c", &a, &b);
    int p = 0;
    while (q[p++] != a)
        ;
    printf("%c", a);
    while (q[p++] != b)
        printf("%c", q[p - 1]);
    printf("%c", b);
}