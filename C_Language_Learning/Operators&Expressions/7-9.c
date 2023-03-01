#include <stdio.h>

int main()
{
    float a;
    scanf("%f", &a);

    printf("%.2f", a > 0 ? a : -a);
}