#include <stdio.h>

double Pick(int n)
{
    if (n < 1)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else if (n == 3)
        return 4;
    else if (n == 4)
        return 8;
    else
        return Pick(n - 1) + Pick(n - 2) + Pick(n - 3) + Pick(n - 4);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%g\n", Pick(n));
    return 0;
}