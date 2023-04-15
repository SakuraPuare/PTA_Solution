#include <stdio.h>

const int N = 1e3 + 10;
int q[N];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < N; i++)
        scanf("%d", &q[i]);

    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += q[i];
    double avg = sum / n;
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (q[i] > avg)
            cnt++;
    printf("%.2lf\n%d", avg, cnt);
}