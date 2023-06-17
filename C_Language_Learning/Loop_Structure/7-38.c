#include <stdio.h>
#include <math.h>

double calc_pi(double eps)
{
    double sum = 0, last = -1;
    int i = 1;
    while (fabs(sum - last) >= eps)
    {
        last = sum;
        sum += 1.0 / (2 * i - 1) * (i % 2 ? 1 : -1);
        i++;
    }
    return 4 * sum;
}

int main()
{
    double eps;
    scanf("%lf", &eps);
    printf("pi=%.6f", calc_pi(eps));
}