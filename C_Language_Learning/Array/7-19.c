#include <stdio.h>

int q[100];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &q[i]);
    int a = 0;
    for (int i = 1; i < n; i++)
        if (q[i] < q[a])
            a = i;
    int t = q[0];
    q[0] = q[a];
    q[a] = t;
    for (int i = 0; i < n; i++)
        printf("%d ", q[i]);
}