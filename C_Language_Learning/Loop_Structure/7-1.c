#include <stdio.h>
#include <math.h>

int nums[100000];

int is_prime(long num)
{
    if (num == 2)
        return 1;
    for (long i = 2; i <= (long)sqrt(num) + 1; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    long n;
    
    int p = 0;
    scanf("%ld", &n);

    for (long num = 2; num <= n; num++)
    {
        if (is_prime(num))
        {
            nums[p] = num, p++;
        }
    }

    for (int i = 0; i < p; i++)
    {
        printf("%6d", nums[i]);
        if ((i + 1) % 10 == 0)
            printf("\n");
    }
}