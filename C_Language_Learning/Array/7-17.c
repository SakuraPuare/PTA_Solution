#include <stdio.h>

int q[100];

int main()
{
    int n, x, f = 0;
    scanf("%d %d", &n, &x);
    for (int i = 0; i < n; i++)
        scanf("%d", &q[i]);
    for (int i = 0; i < n; i++)
        if (q[i] == x)
            printf("%d\n", i), f = 1;
    if (!f)
        puts("Not Found");
}