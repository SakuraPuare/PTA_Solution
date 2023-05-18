#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%.2f\n", (float)x * y * (1 - 0.15));
}