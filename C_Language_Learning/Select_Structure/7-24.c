#include <stdio.h>

int main()
{
    int a, b, c, d, s = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (c >= a || d >= b)
    {
        printf("%d-Y ", c);
        s++;
    }
    else
        printf("%d-N ", c);
    if (d >= a || c >= b)
    {
        printf("%d-Y", d);
        s++;
    }
    else
        printf("%d-N", d);
    printf("\n");
    if (s == 0)
        printf("zhang da zai lai ba");
    else if (c < a && d >= b)
        printf("qing 2 zhao gu hao 1");
    else if (d < a && c >= b)
        printf("qing 1 zhao gu hao 2");
    else if (c >= a && d >= a)
        printf("huan ying ru guan");
    else if (c < a)
        printf("2: huan ying ru guan");
    else
        printf("1: huan ying ru guan");
}
