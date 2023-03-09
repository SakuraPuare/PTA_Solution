#include <stdio.h>

int main()
{
    int a, b, x, y, z;
    scanf("%d%d", &a, &b);
    scanf("%d%d%d", &x, &y, &z);

    int ticket = x + y + z;
    int pa = !x && !y && !z, pb = x && y && z;

    if (pa)
        printf("The winner is a: %d + %d", a, 3 - ticket);
    else if (pb)
        printf("The winner is b: %d + %d", b, ticket);
    else
    {
        if (a > b)
            printf("The winner is a: %d + %d", a, 3 - ticket);
        else if (a < b)
            printf("The winner is b: %d + %d", b, ticket);
    }
}