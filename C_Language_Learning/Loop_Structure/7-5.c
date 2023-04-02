#include <stdio.h>

int main()
{
    int m;
    scanf("%d", &m);

    for (int i = 1; i <= m; i++)
    {
        for (int j = i; j > 0; j--)
        {
            printf("%d ", j);
        }
        puts("");
    }
}