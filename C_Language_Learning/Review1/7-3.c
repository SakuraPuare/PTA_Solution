#include <stdio.h>
#define N 4
int q[N][N];

int main()
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &q[i][j]);

    for (int j = 0; j < N; j++)
    {
        int min = q[0][j];
        for (int i = 1; i < N; i++)
            if (q[i][j] < min)
                min = q[i][j];
            
        printf("%d ", min);
    }
}