#include <stdio.h>

int main()
{
    int n;
    double a = 100, b = 100;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        a += a * 0.001;
        int mod = i % 5;
        if (mod == 0 || mod == 1 || mod == 2)
            b += b * 0.002;
        else
            b -= b * 0.001;
    }
    printf("%.5lf,%.5lf", a, b);
}