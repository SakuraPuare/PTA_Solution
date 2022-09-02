#include <stdio.h>
#include <math.h>

int main()
{
    double a = 0, b = 0, c = 0;
    scanf("%lf %lf %lf", &a, &b, &c);

    double delta = pow(b, 2) - 4 * a * c;
    if (a == 0 && b == 0 && c != 0)
    {
        printf("Not An Equation");
    }
    else if (a == 0 && b == 0 && c == 0)
    {
        printf("Zero Equation");
    }
    else if (a == 0 && b != 0 && c != 0)
    {
        printf("%.2f", c / -b);
    }
    else if (delta == 0)
    {
        double ans = (sqrt(delta) - b) / 2 / a;
        if (ans == 0)
            ans = 0;
        printf("%.2f", ans);
    }
    else if (delta > 0)
    {
        double plus = (sqrt(delta) - b) / 2 / a;
        double minus = ((-sqrt(delta)) - b) / 2 / a;
        if (plus > minus)
            printf("%.2f\n%.2f", plus, minus);
        else
            printf("%.2f\n%.2f", minus, plus);
    }
    else if (delta < 0)
    {
        double imaginary = sqrt(-delta) / 2 / a;
        double real = -b / 2 / a;
        if (real == 0)
            real = 0;
        if (imaginary < 0)
            imaginary = -imaginary;
        printf("%.2f+%.2fi\n%.2f-%.2fi", real, imaginary, real, imaginary);
    }
    return 0;
}