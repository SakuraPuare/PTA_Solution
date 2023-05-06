#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int t, k;
        scanf("%d %d", &t, &k);
        int sum = k;
        for (int i = 1; i < t; i++)
            sum = (sum + 1) * 2;
        printf("%d", sum);
    }
}