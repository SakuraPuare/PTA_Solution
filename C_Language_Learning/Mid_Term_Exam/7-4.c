#include <stdio.h>

int q[40];

int fibo(int x)
{
    if (x < 40)
        return q[x];
    else
        return fibo(x - 1) + fibo(x - 2);
}

void init()
{
    q[0] = 0;
    q[1] = 1;
    for (int i = 2; i < 40; i++)
        q[i] = q[i - 1] + q[i - 2];
}

int main()
{
    init();
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%-10d", fibo(i));
        if (i % 4 == 0)
            printf("\n");
    }
}