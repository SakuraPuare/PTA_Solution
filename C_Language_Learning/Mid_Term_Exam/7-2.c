#include <stdio.h>
#define N 1000000

int q[N];

int prime(int x)
{
    if (x < 2)
        return 0;
    if (x > N)
    {
        for (int i = 2; i * i <= x; i++)
            if (x % i == 0)
                return 0;
        return 1;
    }
    return q[x];
}

void init()
{
    for (int i = 0; i < N; i++)
        q[i] = 1;
    q[0] = q[1] = 0;
    for (int i = 2; i * i < N; i++)
        if (q[i])
            for (int j = i * i; j < N; j += i)
                q[j] = 0;
}

int main()
{
    init();
    int m, n, cnt = 0;
    scanf("%d%d", &m, &n);
    for (int i = m; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            for (int k = j + 1; k <= n; k++)
                if (prime(i) && prime(j) && prime(k))
                    if (prime(i * j + k) && prime(i * k + j) && prime(j * k + i))
                        cnt++;
    printf("%d\n", cnt);
}