#include <stdio.h>

int fraction(int x)
{
    return (x <= 0 ? 1 : x * fraction(x - 1));
}

int main()
{
    double delta = 0, sum = 0;
    int digit = 0;
    scanf("%lf", &delta);
    double last = delta;
    while (last >= delta)
    {
        last = 1 / (double)fraction(digit);
        sum += last;
        digit++;
    }
    printf("%.10lf", sum);
    return 0;
}
