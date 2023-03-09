#include <stdio.h>

int main()
{
    double weight, height;
    scanf("%lf%lf", &weight, &height);
    double bmi = weight / (height * height);
    if (bmi > 25)
        printf("%.1f\nPANG", bmi);
    else
        printf("%.1f\nHai Xing", bmi);
}