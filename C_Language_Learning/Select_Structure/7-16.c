#include <stdio.h>

int main()
{
    // 输入4个整数代表机器人当前位置
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    printf("%d", abs(x1 - x2) + abs(y1 - y2));
}