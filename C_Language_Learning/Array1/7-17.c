#include <stdio.h>

const int N = 5e4;
int primes[N];

void prime()
{
    for (int i = 0; i < N; i++)
        primes[i] = 1;
    primes[0] = primes[1] = 0;
    for (int i = 2; i < N; i++)
        if (primes[i])
            for (int j = i + i; j < N; j += i)
                primes[j] = 0;
}

int main()
{
    prime();
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int q[n], p = -1;
        for (int i = 2; i <= n; i++)
            if (primes[i])
                q[++p] = i;

        for (int i = 0; i <= p; i++)
            if (i != p)
                printf("%d ", q[i]);
            else
                printf("%d\n", q[i]);
    }
}