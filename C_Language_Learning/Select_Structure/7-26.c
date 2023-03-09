#include <stdio.h>

int main()
{
    int x, y;
    char c;
    scanf("%d%c%d", &x, &c, &y);
    if (c == '+')
        printf("%d", x + y);
    else if (c == '-')
        printf("%d", x - y);
    else if (c == '*')
        printf("%d", x * y);
    else if (c == '/')
        if (y != 0)
            printf("%d", x / y);
        else
            printf("除数不能为0！");
    else
        puts("运算符输入错误！");
}