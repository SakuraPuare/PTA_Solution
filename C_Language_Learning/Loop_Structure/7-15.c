#include <stdio.h>

int is(int x)
{
    int sum = 0;
    int a = x % 10, b = x / 10 % 10, c = x / 100 % 10;
    sum += a * a * a + b * b + c;
    return sum == x;
}

int main()
{
    int x, y, f = 0;
    scanf("%d %d", &x, &y);
    for (int i = x; i <= y; i++)
        if (is(i))
            printf("%d\n", i), f = 1;
    if (!f)
        printf("Not Found");
}