#include <stdio.h>

int main()
{
    double x;
    scanf("%lf", &x);
    if (x < 0)
        printf("%.3lf", x * x + 9);
    else
        printf("%.3lf", x * x * x + 5);
}