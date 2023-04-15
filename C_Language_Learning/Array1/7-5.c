#include <stdio.h>

const int N = 1e4 + 10;
int q[N];

void del(int x, int l)
{
    for (int i = x; i + 1 < l; i++)
        q[i] = q[i + 1];
}

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    for (int i = 0; i < n; i++)
        q[i] = i + 1;

    int len = n, p = 0;
    while (len > 1)
    {
        p = ((p - m + 1) % len + len) % len;
        printf("%d ", q[p]);
        del(p, len);
        len--;
        p--;

        if (len == 1)
            break;

        p = ((p + k - 1) % len + len) % len;
        printf("%d ", q[p]);
        del(p, len);
        len--;

    }
    printf("%d ", q[0]);
}