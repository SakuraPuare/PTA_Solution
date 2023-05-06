#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < n; i++)
    {
        int max = a[i][0];
        for (int j = 0; j < n; j++)
            if (a[i][j] > max)
                max = a[i][j];
        for (int j = 0; j < n; j++)
        {
            int min = a[0][j];
            for (int k = 0; k < n; k++)
                if (a[k][j] < min)
                    min = a[k][j];
            if (a[i][j] == max && a[i][j] == min)
            {
                printf("%d %d", i, j);
                return 0;
            }
        }
    }
    printf("NONE");
}