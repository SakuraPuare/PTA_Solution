#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    // scanf 返回值为正确赋值的数量
    if (scanf("%d %d", &a, &b) == 2)
        printf("%d", a * b);
    else
        printf("%d", a * a);
}