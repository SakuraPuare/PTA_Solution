#include <stdio.h>

int is_prime(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return 0;
    return 1;
}

int main()
{
    int a, b, cnt = 0;
    scanf("%d %d", &a, &b);
    int f = is_prime(a) && is_prime(b);

    if (f)
    {
        double sum = 0;
        for (int i = a; i <= b; i++)
            if (is_prime(i))
                printf("%d,", i), sum += i, cnt++;
        printf("ave=%.1lf", sum / cnt);
    }
    else
    {
        for (int i = a; i <= b; i++)
            if (i % 5 == 0)
                printf("%d,", i);
    }
}