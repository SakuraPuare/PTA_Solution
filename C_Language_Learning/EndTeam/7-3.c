#include <stdio.h>

int is_prime(int x)
{
    if (x == 1)
        return 0;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return 0;
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    printf("%d\n", is_prime(t));
}