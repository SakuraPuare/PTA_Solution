#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int c[a][b];
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            scanf("%d", &c[i][j]);

    int d, e;
    scanf("%d %d", &d, &e);
    int f[d][e];
    for (int i = 0; i < d; i++)
        for (int j = 0; j < e; j++)
            scanf("%d", &f[i][j]);

    if (b != d)
        printf("Error: %d != %d", b, d);
    else
    {
        printf("%d %d\n", a, e);
        int g[a][e];
        for (int i = 0; i < a; i++)
            for (int j = 0; j < e; j++)
            {
                g[i][j] = 0;
                for (int k = 0; k < b; k++)
                    g[i][j] += c[i][k] * f[k][j];
            }

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < e; j++)
                if (j == e - 1)
                    printf("%d", g[i][j]);
                else
                printf("%d ", g[i][j]);
            printf("\n");
        }
    }
}