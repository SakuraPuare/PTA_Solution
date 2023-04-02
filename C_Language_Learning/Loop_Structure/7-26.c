#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += 1.0 / (i + 1) * pow(-1, i);

    printf("%.6lf", sum);
}