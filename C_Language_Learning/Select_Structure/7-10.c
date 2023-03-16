#include <stdio.h>
#include <math.h>

int main()
{
    double weight, height;
    scanf("%lf%lf", &weight, &height);
    double bmi = weight / pow(height, 2);
    if (bmi > 25)
        printf("%.1f\nPANG", bmi);
    else
        printf("%.1f\nHai Xing", bmi);
}