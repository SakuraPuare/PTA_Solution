#include <stdio.h>

int is_prime(long long x)
{
    if (x == 2)
        return 1;
    for (long long i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    long long n;
    scanf("%lld", &n);
    for (long long i = 2; i <= n; i++)
        if (is_prime(i) && is_prime(n - i))
        {
            printf("%lld = %lld + %lld\n", n, i, n - i);
            return 0;
        }
}