#include <stdio.h>

const int N = 1e5;
int q[N];

int f(int x)
{
    int res = 0, t = x;
    while (t)
        res += t % 10, t /= 10;
    return res;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void merge_sort(int q[], int l, int r)
{
    if (l >= r)
        return;
    int mid = l + r >> 1;
    merge_sort(q, l, mid);
    merge_sort(q, mid + 1, r);
    int k = 0, i = l, j = mid + 1;
    int temp[N];
    while (i <= mid && j <= r)
    {
        if (f(q[i]) < f(q[j]))
            temp[k++] = q[i++];
        else if (f(q[i]) >= f(q[j]))
            temp[k++] = q[j++];
        else
        {
            if (q[i] < q[j])
                temp[k++] = q[i++];
            else
                temp[k++] = q[j++];
        }
    }
    while (i <= mid)
        temp[k++] = q[i++];
    while (j <= r)
        temp[k++] = q[j++];
    for (i = l, j = 0; i <= r; i++, j++)
        q[i] = temp[j];
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &q[i]);

    merge_sort(q, 0, n - 1);
    for (int i = n - 1; i >= 0; i--)
        if (i != 0)
            printf("%d,", q[i]);
        else
            printf("%d", q[i]);
}