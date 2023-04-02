#include <stdio.h>

int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    int x = 100 / 5, y = 100 / 3, z = 100 * 3;
    for (int i = 1; i <= x; i++)
        for (int j = 1; j <= y; j++)
            for (int k = 0; k <= z; k += 3)
                if (i * 5 + j * 3 + k / 3 == 100 && i + j + k == 100 && cnt < n)
                    printf("%d %d %d\n", i, j, k), cnt++;
}