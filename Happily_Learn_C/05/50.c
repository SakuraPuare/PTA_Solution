#include <stdio.h>
#include <math.h>

double func(double x)
{
    return pow(x, 5) - 2 * pow(x, 4) + pow(x, 2) - 3;
}

int main()
{
    double delta = 0, left = 0, right = 2, ans = 0;
    scanf("%lf", &delta);
    while (1)
    {
        double mid = (left + right) / 2;
        double ans = func(mid);
        if (ans > 0)
            right = mid;
        else
            left = mid;

        if (abs(ans) <= delta)
        {
            printf("%.8lf\n", mid);
            break;
        }  
    }
    return 0;
}