#include <stdio.h>

float f(float x)
{
    return x == 0 ? 0 : 1.0 / x;
}

int main()
{
    float x;
    scanf("%f", &x);
    printf("f(%.1f) = %.1f\n", x, f(x));
    return 0;
}