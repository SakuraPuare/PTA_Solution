#include <stdio.h>

double ECost(double x);

int main()
{

    int x;

    scanf("%d %d", &x);

    printf("cost = %0.2lf", ECost(x));

    return 0;
}

/* 请在这里填写答案 */
double ECost(double x)
{
    if (x <= 50)
        return x * 0.55;
    else if (x <= 70)
        return 50 * 0.55 + (x - 50) * 0.6;
    else
        return 50 * 0.55 + 20 * 0.6 + (x - 70) * 0.65;
}