#include <stdio.h>

int isnarcissistic(int n)
{
    int a, b, c;
    a = n / 100;
    b = n / 10 % 10;
    c = n % 10;
    if (n == a * a * a + b * b * b + c * c * c)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n < 100 || n > 999)
    {
        puts("请输入一个三位数");
        return 0;
    }

    if (isnarcissistic(n))
        printf("%d是水仙花数", n);
    else
        printf("%d不是水仙花数", n);
}