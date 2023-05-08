#include <stdio.h>
#define N 4
#define M 3
int Row, Col;
int fun(int array[N][M]);
int main()
{
    int a[N][M], i, j, max, row, col;
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
    max = fun(a);
    printf("max=%d,row=%d,col=%d", max, Row, Col);
    return 0;
}

int fun(int arr[N][M])
{
    int max = arr[0][0];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            if (arr[i][j] > max)
                max = arr[i][j], Row = i, Col = j;
    return max;
}