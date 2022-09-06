#include <stdio.h>

int main()
{
    long long n = 0;
    scanf("%Ld", &n);
    int digit = 0;
    while (n != 0)
    {
        digit++;
        n /= 10;
    }
    printf("%d", digit);
    return 0;
}