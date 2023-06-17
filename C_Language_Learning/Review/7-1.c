#include <stdio.h>

int q[200];

int calc(int x)
{
    int sum = 0;
    while (x)
    {
        sum += (x % 10) * (x % 10);
        x /= 10;
    }
    return sum;
}

int cmp(const void *a, const void *b)
{
    int x = *(int *)a;
    int y = *(int *)b;
    int cx = calc(x);
    int cy = calc(y);
    if (cx == cy)
        return x - y;
    else
        return cx - cy;
}

int main()
{
    int n;
    while (scanf("%d", &n), n != 0)
    {
        for (int i = 0; i < n; i++)
            scanf("%d", &q[i]);

        qsort(q, n, sizeof(int), cmp);

        for (int i = 0; i < n; i++)
            if (i == n - 1)
                printf("%d\n", q[i]);
            else
                printf("%d ", q[i]);
    }
}