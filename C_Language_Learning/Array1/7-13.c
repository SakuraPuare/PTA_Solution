#include <stdio.h>

const int N = 1e2;

int q[N];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &q[i]);

    int max = q[0], min = q[0], sum = q[0];
    for (int i = 1; i < n; i++)
    {
        if (q[i] > max)
            max = q[i];
        if (q[i] < min)
            min = q[i];
        sum += q[i];
    }
    printf("max=%d\nmin=%d\naverage=%.2f", max, min, sum * 1.0 / n);
}