#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    // 排序输出
    if (a > b)
        printf("%d %d", b, a);
    else
        printf("%d %d", a, b);
}