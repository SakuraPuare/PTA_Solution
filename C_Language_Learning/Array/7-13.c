#include <stdio.h>

int q[200];

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &q[i]);
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        swap(&q[a - 1], &q[b - 1]);
    }
    for (int i = 0; i < n; i++)
        if (i != n - 1)
            printf("%d ", q[i]);
        else
            printf("%d", q[i]);
}