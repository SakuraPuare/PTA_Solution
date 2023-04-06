#include <stdio.h>

int q[1000];

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
    int a = 0, b = 0;
    // a max b min
    for (int i = 1; i < n; i++)
        if (q[i] < q[b])
            b = i;
    swap(&q[b], &q[0]);

    for (int i = 1; i < n; i++)
        if (q[i] > q[a])
            a = i;
    swap(&q[a], &q[n - 1]);

    for (int i = 0; i < n; i++)
        printf("%d ", q[i]);
}