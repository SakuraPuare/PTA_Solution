#include <stdio.h>

const int n = 4;
int q[n];

int main()
{
    scanf("%d %d %d %d", &q[0], &q[1], &q[2], &q[3]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i != j)
                for (int k = 0; k < n; k++)
                    if (k != i && k != j)
                        for (int l = 0; l < n; l++)
                            if (l != i && l != j && l != k)
                                if (q[i] > 0)
                                    printf("%d%d%d%d\n", q[i], q[j], q[k], q[l]);
}