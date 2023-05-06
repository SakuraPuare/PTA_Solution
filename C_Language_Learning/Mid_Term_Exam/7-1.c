#include <stdio.h>

int q[100];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &q[i]);
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += q[i];
    float avg = (float)sum / n;
    printf("%.2f\n", avg);
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (q[i] > avg)
            cnt++;
    printf("%d\n", cnt);
}