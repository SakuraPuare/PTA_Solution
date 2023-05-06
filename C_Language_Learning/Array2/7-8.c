#include <stdio.h>

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        int c[a][b];
        for (int i = 0; i < a; i++)
            for (int j = 0; j < b; j++)
                scanf("%d", &c[i][j]);

        int max_i = 0, max_j = 0;
        int min_i = 0, min_j = 0;
        for (int i = 0; i < a; i++)
            for (int j = 0; j < b; j++)
            {
                if (c[i][j] > c[max_i][max_j])
                    max_i = i, max_j = j;
                if (c[i][j] < c[min_i][min_j])
                    min_i = i, min_j = j;
            }

        swap(c[max_i][max_j], c[min_i][min_j]);

        for (int i = 0; i < a; i++)
            for (int j = 0; j < b; j++)
                if (i == a - 1 && j == b - 1)
                    printf("%d", c[i][j]);
                else if (j == b - 1)
                    printf("%d\n", c[i][j]);
                else
                    printf("%d ", c[i][j]);
            printf("\n");
    }
}