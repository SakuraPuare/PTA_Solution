#include <stdio.h>

/* 你编写的函数将嵌入在这里 */

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("SumEven = %d\n", sumEven(a, b));
    return 0;
}

int sumEven(int begin, int end)
{
    int i, sum = 0;
    for (i = begin; i <= end; i++)
    {
        if (i % 2 == 0)
            sum += i;
    }
    return sum;
}