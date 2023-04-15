#include <stdio.h>

const int N = 1e3;
int a[N], b[N];

int main()
{
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    int p = -1;
    for (int i = 0; i < 10; i++)
        if (a[i] % 2 == 0)
            b[++p] = a[i];

    for (int i = 0; i <= p; i++)
        if (i != p)
            printf("%d ", b[i]);
        else
            printf("%d", b[i]);

    if (p == -1)
        printf("None");
}