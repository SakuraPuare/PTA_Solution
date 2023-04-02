#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int q[1000];
    for (int i = 2; i <= n; i++)
    {
        int p = 0;
        for (int j = 1; j < i; j++)
            if (i % j == 0)
                q[p++] = j;
        int sum = 0;
        for (int j = 0; j < p; j++)
            sum += q[j];
        if (sum == i)
        {
            printf("%d its factors are ", i);
            for (int k = 0; k < p; k++)
                printf("%d ", q[k]);
            printf("\n");
        }
    }
}