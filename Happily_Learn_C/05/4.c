#include <stdio.h>

int gcd(int x, int y)
{
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("%d", gcd(a, b));
    else
        printf("%d", gcd(b, a));
    return 0;
}