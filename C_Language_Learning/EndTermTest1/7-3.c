#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int m = 0;
    if (x <= 10)
        m = x * 2;
    else
        m = (x - 10) * 3 + 20;
    printf("%d", m);
}