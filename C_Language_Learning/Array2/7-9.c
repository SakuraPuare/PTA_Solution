#include <stdio.h>
#include <string.h>

int main()
{
    int n = 6;
    // scanf("%d", &n);
    int a[n][n];
    memset(a, 0, sizeof(a));

    // spiral matrix from right to left
    int i, j, k = 0;
    for (j = n - 1;; j--)
    {
        for (i = 0; i < n; i++)
            a[i][j] = k++;
        for (j -= 1; j >= 0; j--)
            a[n - 1][j] = k++;
        for (i -= 1; i >= 0; i--)
            a[j][i] = k++;
        for (; j < n - 1; j++)
            a[i][j] = k++;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}