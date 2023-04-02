#include <stdio.h>
#include <string.h>

#define N 10000
int prime[N] = {0, 0, 1, 1};

void primes()
{
    for (int i = 2; i < N; i++)
        prime[i] = 1;
    for (int i = 2; i < N; i++)
    {
        if (prime[i])
            for (int j = i; j < N - i; j += i)
                prime[j + i] = 0;
    }
}

int main()
{
    primes();
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, cnt = 0;
        scanf("%d", &n);
        if (n < 6)
            puts("0");

        for (int i = 2; i <= n - 3; i++)
            for (int j = 2; j <= n - i; j++)
            {
                int k = n - i - j;
                if (prime[i] && prime[j] && prime[k])
                     cnt++;
            }
        printf("%d\n", cnt);
    }
}