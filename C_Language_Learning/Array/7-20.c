#include <stdio.h>

int q[1000];

int main()
{
    int n, x, f = 0;
    scanf("%d %d", &n, &x);
    for (int i = 0; i < n; i++)
        scanf("%d", &q[i]);
    int a = 0;
    for (int i = 0; i < n; i++)
        if (q[i] == x)
            a = i, f = 1;
    if (f)
        printf("%d", a);
    else
        puts("Not Found");
}