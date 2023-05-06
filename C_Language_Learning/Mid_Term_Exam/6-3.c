#include <stdio.h>

int factors_sum(int x);

int main(void)
{
    int x;
    scanf("%d", &x);
    while (x != -1)
    {
        printf("%d\n", factors_sum(x));
        scanf("%d", &x);
    }
    return 0;
}

int factors_sum(int x)
{
    int sum = 0;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
            sum += i;
    }
    return sum;
}