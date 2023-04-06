#include <stdio.h>

int q[5];

int main()
{
    for (int i = 0; i < 5; i++)
        scanf("%d", &q[i]);
    int a = 0;
    for (int i = 1; i < 5; i++)
        if (q[a] > q[i])
            a = i;

    int t = q[a];
    q[a] = q[0];
    q[0] = t;

    for (int i = 0; i < 5; i++)
        printf("%4d", q[i]);
    printf("\nmin=%d,weizhi=%d", q[0], a);
}