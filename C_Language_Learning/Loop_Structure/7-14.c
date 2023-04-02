#include <stdio.h>

int is_prime(int x)
{
    if (x == 1)
        return 0;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n, sum = 0;
    while (scanf("%d", &n) != EOF)
        if (is_prime(n))
            sum += n;
    printf("%d", sum);
}