#include <stdio.h>
int main()
{
    int d, n;
    scanf("%d%d", &d, &n);
    printf("%d", (d - 1 + n) % 7 + 1);
}