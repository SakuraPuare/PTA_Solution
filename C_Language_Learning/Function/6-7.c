#include <stdio.h>
void fun(int a[])
{
    int i = a[0], j = a[1], k = a[2];
    a[0] = a[3];
    a[1] = a[4];
    a[2] = a[5];
    a[3] = a[6];
    a[4] = a[7];
    a[5] = i;
    a[6] = j;
    a[7] = k;
}

int main()
{
    int a[8] = {1, 2, 3, 4, 5, 6, 7, 8}, i, j;
    fun(a);
    for (i = 0; i < 8; i++)
        printf("%3d", a[i]);
    printf("\n");
    return 0;
}