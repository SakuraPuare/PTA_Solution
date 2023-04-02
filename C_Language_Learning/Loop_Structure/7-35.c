#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double a, double b, double c, double d, double x)
{
    return a * pow(x, 3) + b * pow(x, 2) + c * x + d;
}

int main()
{
    double a, b, c, d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    double left, right, mid;
    scanf("%lf %lf", &left, &right);
    while (left < right)
    {
        mid = (left + right) / 2;
        double fmid = f(a, b, c, d, mid);
        if (abs(fmid) < 1e-4)
            break;
        else if (fmid * f(a, b, c, d, left) > 0)
            left = mid;
        else
            right = mid;
    }
    printf("%.2lf", mid);

    return 0;
}