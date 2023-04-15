#include <stdio.h>
#include <string.h>

const int N = 1e6;
int prime[N], q[N];

void primes()
{
    for (int i = 2; i < N; i++)
    {
        if (prime[i] == 0)
        {
            prime[++prime[0]] = i;
            for (int j = i + i; j < N; j += i)
                prime[j] = 1;
        }
    }
}

int main()
{
    char s[N];
    while (scanf("%s", s))
    {
        if (strcmp(s, "###") == 0)
            break;

        int n = 0;
        for (int i = 0; s[i]; i++)
            n = n * 10 + s[i] - '0';

        int l = -1;
        while (n != 1)
            for (int i = 0; n < prime[0]; i++)
                if (n % prime[i] == 0)
                {
                    q[++l] = prime[i];
                    n /= prime[i];
                    break;
                }

        for (int i = 0; i <= l; i++)
            if (i != l)
                printf("%d*", q[i]);
            else
                printf("%d\n", q[i]);

    }
}