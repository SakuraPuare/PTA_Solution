#include <stdio.h>

int q[15];

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &q[i]);

    // sort reverse
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (q[i] < q[j])
            {
                int t = q[i];
                q[i] = q[j];
                q[j] = t;
            }

    for (int i = 0; i < n; i++)
        if (i == n - 1)
            printf("%d", q[i]);
        else
            printf("%d ", q[i]);
}