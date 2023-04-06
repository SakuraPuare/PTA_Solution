#include <stdio.h>

int q[11] = {1, 2, 4, 6, 8, 9, 12, 15, 149, 156};

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int x, n = 10;
    scanf("%d", &x);
    int p = 0;
    while (q[p++] < x)
        ;
    for (int i = n - 1; i > p - 2; i--)
        swap(&q[i], &q[i + 1]);
    q[p - 1] = x;

    for (int i = 0; i < n + 1; i++)
        printf("%5d", q[i]);
}