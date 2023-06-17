// 输入一个正整数n，输出具有n层的上三角数字三角形。
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 1;
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
            printf("%4d", cnt++);
        printf("\n");
    }
}