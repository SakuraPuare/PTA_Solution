#include <stdio.h>

const int N = 2e2;
int q[N];

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);

    for (int i = 0; i < n; i++)
        scanf("%d", &q[i]);

    for (int i = 0; i < n; i++)
        printf("%d ", q[((i + n - x) % n + n) % n]);
}