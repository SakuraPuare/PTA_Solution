#include <stdio.h>

char q[100];

int main()
{
    int p = 0;
    while ((q[p++] = getchar()) != '\n')
        ;
    char c;
    scanf(" %c", &c);

    for (int i = 0; i < p; i++)
        (q[i] == c) ? q[i] : printf("%c", q[i]);
}