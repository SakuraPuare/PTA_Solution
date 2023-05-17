#include <stdio.h>
#define N 20
int Search(int *pa, int n, int k, int *p);
int main()
{
    int a[N], n, cmp, *p = &cmp;
    int pos, num = 0;
    int i, k;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &k);
    pos = Search(a, n, k, p);
    printf("%d\n%d\n", pos, cmp);
    return 0;
}

int Search(int *pa, int n, int k, int *count)
{
    int l = 0, r = n - 1, mid = l + r >> 1;
    *count = 0;
    while (l <= r)
    {
        (*count)++;
        if (pa[mid] == k)
            return mid;
        else if (pa[mid] < k)
            l = mid + 1;
        else
            r = mid - 1;
        mid = l + r >> 1;
    }
    return -1;
}