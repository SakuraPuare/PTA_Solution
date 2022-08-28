#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

double funcos(double e, double x)
{
    int digit = 0;
    double sum = 0, last = 0;
    do
    {
        last = pow(x, digit) / factorial(digit);
        if (digit % 4 == 0)
            sum += last;
        else
            sum -= last;
        digit += 2;
    } while (abs(last) >= e);
    return sum;
}

int main()
{
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
    system("pause");
            return 0;
}