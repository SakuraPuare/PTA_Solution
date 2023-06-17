#include <stdio.h>
int fun(int w);
int main()
{
    int m;
    scanf("%d", &m);
    printf("The result is %d\n", fun(m));
    return 0;
}

/* 请在这里填写答案 */
int fun(int w)
{
    int len = 0, t = w;
    while (t != 0)
        t /= 10, len++;
    int x = 1;
    for (int i = 1; i < len; i++)
        x *= 10;
    return w % x;
}