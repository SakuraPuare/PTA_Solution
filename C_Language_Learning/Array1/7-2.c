#include <stdio.h>
#include <stdlib.h>

const int N = 5e2;
int q[N], t[N];

int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    // int n = 6;
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &q[i]);

    int cnt = 0;

    qsort(q, n, sizeof(int), cmp);
    int x = -1, y = -1, z = -1;
    while (x < n && y < n && z < n)
    {
        x = -1;
        while (x < n && t[++x])
            ;
        y = x + 1;
        while (y < n && !t[y] && q[y] - q[x] != 1)
            y++;
        z = y + 1;
        while (z < n && !t[z] && q[z] - q[y] != 1)
            z++;
        if (x == n || y == n || z == n)
            break;
        cnt++, t[x] = t[y] = t[z] = 1;
    }

    printf("%d", cnt);
}