#include <stdio.h>

int main()
{
    int n;
    while (~scanf("%d", &n))
    {
        for (int i = 0; i * 5 <= n; i++)
            for (int j = 0; j * 3 <= n; j++)
            {
                int k = n - i - j;
                int f = i != 0 && j != 0 || i != 0 && k != 0 || j != 0 && k != 0;
                if (f && k % 3 == 0)
                    if (i * 5 + j * 3 + k / 3 == n)
                        printf("%d %d %d\n", i, j, k);
            }
    }
}