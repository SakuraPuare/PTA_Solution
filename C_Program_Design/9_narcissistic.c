#include <stdio.h>
#include <stdlib.h>

int narcissistic(int number)
{
    int sum = 0;
    int num = number;
    while (number != 0)
    {
        int num = number % 10;
        number /= 10;
        sum += num * num * num;
    }
    if (sum == num)
        return 1;
    else
        return 0;
}

void PrintN(int m, int n)
{
    for (int i = m + 1; i < n; i++)
    {
        if (narcissistic(i) == 1)
        {
            printf("%d\n", i);
        }
    }
}

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if (narcissistic(m))
        printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if (narcissistic(n))
        printf("%d is a narcissistic number\n", n);
    system("pause");
    return 0;
}