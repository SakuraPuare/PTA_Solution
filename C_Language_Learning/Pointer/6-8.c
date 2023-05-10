#include <stdio.h>

void IntSwap(int *x, int *y);
void IntSortAsc3(int *x, int *y, int *z);

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    IntSortAsc3(&a, &b, &c);
    printf("%d %d %d\n", a, b, c);
    return 0;
}

void IntSwap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

void IntSortAsc3(int *x, int *y, int *z)
{
    if (*x > *y)
        IntSwap(x, y);
    if (*x > *z)
        IntSwap(x, z);
    if (*y > *z)
        IntSwap(y, z);
}
