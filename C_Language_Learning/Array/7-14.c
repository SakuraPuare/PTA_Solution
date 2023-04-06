#include <stdio.h>

int q[200], t[200];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &q[i]);
    int k;
    scanf("%d", &k);
    for (int i = 0; i < k; i++)
    {
        int t, c = 0, p = 0;
        scanf("%d", &t);
        while (c != t)
        {
            if (q[p] != -1)
                c++;
            p++;
        }
        q[p - 1] = -1;
    }
    int a = 0, b = 0;
    while (a < n)
    {
        if (q[a] != -1)
            t[b++] = q[a];
        a++;
    }

    for (int i = 0; i < b; i++)
    if (i == b - 1)
        printf("%d", t[i]);
    else
        printf("%d ", t[i]);
}