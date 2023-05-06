#include <stdio.h>

double Sign(double x);

int main()
{
    double x, y;
    scanf("%lg", &x);
    y = Sign(x);
    printf("%g\n", y);
    return 0;
}

double Sign(double x)
{
    if (x > 0)
        return 1;
    else if (x < 0)
        return -1;
    else
        return 0;
}