#include <stdio.h>

char q[100];

int main()
{
    int p = 0;
    while ((q[p++] = getchar()) != '\n')
        ;

    int m, n;
    scanf("%d %d", &m, &n);

    for (int i = m; i < m + n; i++)
        printf("%c", q[i]);
}