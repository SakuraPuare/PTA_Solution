#include <stdio.h>
#include <math.h>

// 迭代法求立方根
double cubic_root(double n, double eps)
{
    double x = 1;
    while (1)
    {
        double x1 = (2 * x + n / x / x) / 3;
        if (fabs(x1 - x) < eps)
            return x1;
        x = x1;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%.5f", cubic_root(n, 1e-7));
}