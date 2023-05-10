#include <stdio.h>
void fun(double a, double b, double *x, double *y);
int main()
{
    double a, b, c, d;
    scanf("%lf%lf", &a, &b);
    fun(a, b, &c, &d);
    printf("c=%.2f  d=%.2f\n", c, d);
    return 0;
}

void fun(double a, double b, double *x, double *y)
{
    *x = a * b;
    *y = a / b;
}