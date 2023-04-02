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
    int n;
    scanf("%d", &n);
    int p = 0, q[100], t = n;
    while (t > 1)
        for (int i = 2; i <= t; i++)
            if (is_prime(i) && t % i == 0)
            {
                q[p++] = i;
                t /= i;
                break;
            }
    printf("%d=", n);
    for (int i = 0; i < p; i++)
    {
        printf("%d", q[i]);
        if (i != p - 1)
            printf("*");
    }
}