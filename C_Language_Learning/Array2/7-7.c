#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    int max_i = 0, max_j = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] > a[max_i][max_j])
                max_i = i, max_j = j;

    printf("max=%d,i=%d,j=%d", a[max_i][max_j], max_i, max_j);
}