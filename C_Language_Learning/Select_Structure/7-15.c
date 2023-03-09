#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a <= 0)
        return 0;
    if (a % 3 == 0 && a % 5 != 0)
        printf("%d", a % 5);
    else if (a % 5 == 0 && a % 3 != 0)
        printf("%d", a % 3);
    else if (a % 3 != 0 && a % 5 != 0)
        printf("%d", a % 15);
}