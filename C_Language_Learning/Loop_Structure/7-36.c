#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int q[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &q[i]);

    int a1 = 0, a2 = 0, a3 = 0, s = 0;
    for (int i = 0; i < n; i++)
    {
        if (q[i] % 3 == 0 && q[i] > a1)
            a1 = q[i];
        if (q[i] % 3 == 1)
            a2++;
        if (q[i] % 3 == 2)
            s += q[i], a3++;
    }

    if (!a1)
        printf("NONE ");
    else
        printf("%d ", a1);
    if (!a2)
        printf("NONE ");
    else
        printf("%d ", a2);
    if (!s)
        printf("NONE");
    else
        printf("%.1f", (float)s / a3);
}