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
    for (int i = 0; i < 50; i++)
        q[i] = (i + 1) * 2;
    int x, p;
    scanf("%d %d", &x, &p);
    if (p < 0 || p > 50)
    {
        puts("error.");
        return 0;
    }

    for (int i = 50; i > p; i--)
        swap(&q[i], &q[i - 1]);
    q[p] = x;

    for (int i = 0; i < 51; i++)
        printf("%d ", q[i]);
}