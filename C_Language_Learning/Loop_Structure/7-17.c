#include <stdio.h>
#include <math.h>

int main()
{
    int a, n;
    scanf("%d %d", &a, &n);
    double sum = 0;
    for (int i = 1; i <= n; i++)
        sum += a * pow(10, i - 1) * (n - i + 1);
    printf("sum=%lld", (long long)sum);
}