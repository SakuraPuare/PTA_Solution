#include <stdio.h>
#include <stdlib.h>

int sum(int m, int n)
{
    int sum = 0;
    for (int i = m; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int sum1(int m, int n)
{
    int sum = 0;
    if (m < 0 && n > 0)
        m = -m;
    for (int i = m + 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    printf("sum = %d\n", sum1(m, n));

    system("pause");
    return 0;
}