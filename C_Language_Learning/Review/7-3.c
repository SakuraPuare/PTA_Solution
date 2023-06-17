#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    if (t >= 1 && t <= 7)
        printf("%d", (t + 1) % 7 + 1);
    else
        puts("Invalid Input!");
}