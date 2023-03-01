#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    // a ? b : c
    a % b == 0 ? printf("%d / %d = %d", a, b, a / b) : printf("%d / %d = %.2f", a, b, a * 1.0 / b);
    // printf("%d / %d = %d",a, b, a / b);
}