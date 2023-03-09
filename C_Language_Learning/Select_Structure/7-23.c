#include <stdio.h>

int main()
{
    int n;
    double l;
    scanf("%d %lf", &n, &l);
    if (n != 92 && n != 95 && n != 98)
        printf("Not available!");
    else if (n == 92)
        printf("%.2lf", l * 6.86);
    else if (n == 95)
        printf("%.2lf", l * 7.45);
    else if (n == 98)
        printf("%.2lf", l * 8.16);
}