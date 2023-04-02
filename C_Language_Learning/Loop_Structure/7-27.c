#include <stdio.h>

int is_palin(int n)
{
    int m = n;
    int rev = 0;
    while (m > 0)
    {
        rev = rev * 10 + m % 10;
        m /= 10;
    }
    return rev == n;
}

int is_prime(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int t;
        scanf("%d", &t);
        for (;;)
        {
            t++;
            if (is_prime(t) && is_palin(t))
            {
                printf("%d\n", t);
                break;
            }
        }
    }
}