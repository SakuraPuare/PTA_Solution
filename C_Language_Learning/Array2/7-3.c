#include <stdio.h>

int main()
{
    int a, b, f = 0;
    scanf("%d %d", &a, &b);
    int c[a][b];
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            scanf("%d", &c[i][j]);

    for (int i = 1; i < a - 1; i++)
        for (int j = 1; j < b - 1; j++)
            if (c[i][j] > c[i - 1][j] && c[i][j] > c[i + 1][j] && c[i][j] > c[i][j - 1] && c[i][j] > c[i][j + 1])
                printf("%d %d %d\n", c[i][j], i + 1, j + 1), f = 1;

    if (!f)
        printf("None %d %d", a, b);
}