#include <stdio.h>

int q[100];

int main()
{
    int n, sum = 0, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d ", &q[i]), sum += q[i];

    float avg = (float)sum / n;

    for (int i = 0; i < n; i++)
        if (q[i] > avg)
            cnt++;
    printf("%.2f\n%d\n", avg, cnt);
}