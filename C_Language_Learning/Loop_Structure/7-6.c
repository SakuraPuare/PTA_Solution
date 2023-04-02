#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        puts("Error");
        return 0;
    }
    else if (n == 1)
    {
        puts("*");
        return 0;
    }
    int mid = n / 2 + 1;

    for (int i = 0; i < n; i++)
    {
        // 前空格
        int l = i < mid ? mid - i - 1 : i - mid + 1;
        for (int s = 0; s < l; s++)
            printf(" ");
            
        // 星号
        if (i == 0 || i == n - 1)
            printf("*");
        else
        {
            printf("*");
            int c = n - 2 - 2 * l;
            for (int s = 0; s < c; s++)
                printf(" ");
            printf("*");
        }

        printf("\n");
    }
}