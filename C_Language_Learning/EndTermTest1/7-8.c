#include <stdio.h>

int calc_digit(int x)
{
    int digit = 0;
    while (x)
        digit += x % 10, x /= 10;
    return digit;
}

int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 1;
    for (int i = 1; i <= 1000; i++)
    {
        if (calc_digit(i) == n)
            printf("%8d", i), cnt++;
        if (cnt % 7 == 0)
            printf("\n"), cnt = 1;
    }
}