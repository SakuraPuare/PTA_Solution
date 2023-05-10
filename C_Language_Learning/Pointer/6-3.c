#include <stdio.h>
void inv(int *x, int n);
int main()
{
    int i, a[10] = {3, 7, 9, 11, 0, 6, 7, 5, 4, 2};
    printf("The original array:\n");
    for (i = 0; i < 10; i++)
        printf("%3d", a[i]);
    printf("\n");
    inv(a, 10);
    printf("The array has been inverted:\n");
    for (i = 0; i < 10; i++)
        printf("%3d", a[i]);
    printf("\n");
    return 0;
}

void inv(int *x, int n)
{
    int t[n];
    for (int i = 0; i < n; i++)
        t[n - i - 1] = x[i];
    for (int i = 0; i < n; i++)
        x[i] = t[i];
}