#include <stdio.h>

int main()
{
    int d;
    scanf("%d", &d);
    printf("%d", (d - 1 + 2) % 7 + 1);
}