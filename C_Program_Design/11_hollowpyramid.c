#include <stdio.h>
#include <stdlib.h>

void hollowPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            printf(" ");
        if (i == n - 1)
        {
            for (int j = 0; j < 2 * n - 1; j++)
                printf("%d", i + 1);
        }
        else
        {
            printf("%d", i + 1);
            for (int j = 1; j <= 2 * i - 1; j++)
                printf(" ");
            if (i > 0)
                printf("%d", i + 1);
            printf("\n");
        }
    }
}

int main()
{
    int n;

    scanf("%d", &n);
    hollowPyramid(n);

    system("pause");
    return 0;
}