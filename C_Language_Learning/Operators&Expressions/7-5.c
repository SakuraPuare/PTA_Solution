#include <stdio.h>

int main()
{
    int w;
    scanf("%d", &w);
    printf("%d", (int)(w * 1000 / (0.005 * 400))); // 精度提升
}