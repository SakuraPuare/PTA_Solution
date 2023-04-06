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
    for (int i = 1; i <= 10; i++)
        q[i - 1] = i;
    int p;
    scanf("%d", &p);
    if (p < 0 || p > 10)
    {
        puts("error.");
        return 0;
    }

    for (int i = 0; i < 10; i++)
        printf("%d ", q[i]);

    for (int i = p; i < 10; i++)
        swap(&q[i], &q[i + 1]);
    puts("");
    for (int i = 0; i < 9; i++)
        printf("%d ", q[i]);
}