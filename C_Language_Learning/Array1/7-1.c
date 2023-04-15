#include <stdio.h>

#define N 100010
// const int N = 1e5 + 10;
int a[N], b[N], t[N];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int x = 0, y = 0;
    while (x < n)
        if (t[a[x]])
            x++;
        else
            t[a[x]] = 1, b[y++] = a[x++];

    for (int i = 0; i < y; i++)
        if (i != y - 1)
            printf("%d ", b[i]);
        else
            printf("%d", b[i]);
}