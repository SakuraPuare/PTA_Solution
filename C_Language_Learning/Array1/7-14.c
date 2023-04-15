#include <stdio.h>

int q[6][6];

int main()
{
    int a, b, c, d, e, f;
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
    q[0][a - 1] = q[1][b - 1] = q[2][c - 1] = q[3][d - 1] = q[4][e - 1] = q[5][f - 1] = 1;

    int n;
    scanf("%d", &n);
    while (n-- != 1)
        for (int i = 0; i < 6; i++)
        {
            int p = 6;
            while (q[i][--p] != 0)
                ;
            q[i][p] = 1;
        }
    for (int i = 0; i < 6; i++)
    {
        int p = 6;
        while (q[i][--p] != 0)
            ;
        if (i != 5)
            printf("%d ", p + 1);
        else
            printf("%d", p + 1);
    }
}
