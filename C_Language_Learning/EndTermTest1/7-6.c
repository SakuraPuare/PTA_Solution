#include <stdio.h>

int main()
{
    int n, min;
    scanf("%d", &n);
    scanf("%d", &min);
    for (int i = 1; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x < min)
            min = x;
    }
    printf("min = %d", min);
}