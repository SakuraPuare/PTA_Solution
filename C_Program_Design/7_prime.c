#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int prime(int p)
{
    if (p <= 0)
        return 0;
    if (p == 1)
        return 0;
    else
    {
        for (int i = 2; i <= sqrt(p); i++)
        {
            if (p % i == 0)
                return 0;
        }
        return 1;
    }
}

int PrimeSum(int m, int n)
{
    int sum = 0;
    for (int i = m; i <= n; i++)
    {
        if (prime(i) == 1)
            sum += i;
    }
    return sum;
}

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for (p = m; p <= n; p++)
    {
        if (prime(p) != 0)
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));
    system("pause");
    return 0;
}