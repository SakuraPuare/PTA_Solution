#include <stdio.h>

int q[1000];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &q[i]);

    for (int p = n - 1; p >= 0; p--)
        if (p == 0)
            printf("%d", q[p]);
        else
            printf("%d ", q[p]);
}
