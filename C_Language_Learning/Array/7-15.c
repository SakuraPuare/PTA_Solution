#include <stdio.h>

int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        float x;
        scanf("%f", &x);
        x >= 60 ? cnt++ : 0;
    }
    printf("%.2f", cnt * 1.0 / n);
}