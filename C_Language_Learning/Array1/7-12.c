#include <stdio.h>

const int N = 5e2;
int a[N], b[N];

void sort(int q[], int l, int r)
{
    if (l >= r)
        return;
    int i = l - 1, j = r + 1, x = q[l + r >> 1];
    while (i < j)
    {
        do
            i++;
        while (q[i] < x);
        do
            j--;
        while (q[j] > x);
        if (i < j)
        {
            int t = q[i];
            q[i] = q[j];
            q[j] = t;
        }
    }
    sort(q, l, j);
    sort(q, j + 1, r);
}

int main()
{
    int n;
    scanf("%d", &n);
    int x = -1, y = -1;
    for (int i = 0; i < n; i++)
    {
        int t;
        scanf("%d", &t);
        if (t % 2 == 1)
            a[++x] = t;
        else
            b[++y] = t;
    }
    sort(a, 0, x);
    sort(b, 0, y);
    for (int i = 0; i <= x; i++)
        printf("%d\n", a[i]);
    for (int i = 0; i <= y; i++)
        printf("%d\n", b[i]);
}