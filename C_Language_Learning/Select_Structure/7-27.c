#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    // 判断季节
    switch (x)
    {
    case 1:
    case 2:
    case 3:
        puts("春季");
        break;
    case 4:
    case 5:
    case 6:
        puts("夏季");
        break;
    case 7:
    case 8:
    case 9:
        puts("秋季");
        break;
    case 10:
    case 11:
    case 12:
        puts("冬季");
        break;
    default:
        puts("输入有误");
        break;
    }
}