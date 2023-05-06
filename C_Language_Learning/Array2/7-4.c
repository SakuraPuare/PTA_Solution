#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];

    // spiral matrix
    int i, j, k = 1;
    for (i = 0; i < n / 2; i++)
    {
        for (j = i; j < n - i; j++)
            a[i][j] = k++;

        for (j = i + 1; j < n - i; j++)
            a[j][n - i - 1] = k++;

        for (j = n - i - 2; j >= i; j--)
            a[n - i - 1][j] = k++;
            
        for (j = n - i - 2; j > i; j--)
            a[j][i] = k++;
    }
    if (n % 2 == 1)
        a[n / 2][n / 2] = k;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%3d", a[i][j]);
        printf("\n");
    }
}