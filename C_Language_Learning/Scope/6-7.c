#include <stdio.h>

int Rand0();

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        printf("%d\n", Rand0());
    }
    return 0;
}

int Rand0()
{
    static int seed = 0;
    seed = (seed * 25173 + 13849) % 65536;
    return seed;
}