#include <stdio.h>

int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    int a = 60 / 5, b = 60 / 2, c = 60;
    for (int i = a; i >= 1; i--)
        for (int j = b; j >= 1; j--)
            for (int k = c; k >= 1; k--)
                if (i * 5 + j * 2 + k == n)
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", i, j, k, i + j + k), cnt++;
    printf("count = %d", cnt);
}