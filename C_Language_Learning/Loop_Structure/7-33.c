#include <stdio.h>

int is(int x, int y)
{
    int a = 1, b = 1;
    for (int i = 2; i < x; i++)
        if (x % i == 0)
            b += i;
    for (int i = 2; i < y; i++)
        if (y % i == 0)
            a += i;
    return a == x && b == y;
}

int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
        if (is(a, b))
            printf("YES\n");
        else
            printf("NO\n");
}