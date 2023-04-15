#include <stdio.h>

int q[10000];

int main()
{
    int x, p = 0;
    scanf("%d", &x);
    while (x)
        q[p++] = x % 10, x /= 10;
    int i = -1;
    while (q[++i] == 0)
        ;
    for (int j = i; j < p; j++)
        printf("%d", q[j]);
}