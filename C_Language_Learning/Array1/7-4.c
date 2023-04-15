#include <stdio.h>
#include <stdlib.h>

const int N = 1e3;
int q[N];

int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void bubble_sort(int q[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (q[j] > q[j + 1])
                swap(&q[j], &q[j + 1]);
}

void select_sort(int q[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int t = i;
        for (int j = i + 1; j < n; j++)
            if (q[j] < q[t])
                t = j;
        swap(&q[i], &q[t]);
    }
}

void insert_sort(int q[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int t = q[i], j = i;
        while (j - 1 >= 0 && q[j - 1] > t)
            swap(&q[j], &q[j - 1]), j--;
        q[j] = t;
    }
}

void shell_sort(int q[], int n)
{
    for (int gap = n >> 1; gap > 0; gap >>= 1)
        for (int i = gap; i < n; i++)
        {
            int t = q[i], j = i;
            while (j - gap >= 0 && q[j - gap] > t)
                swap(&q[j], &q[j - gap]), j -= gap;
            q[j] = t;
        }
}

void merge_sort(int q[], int l, int r)
{
    if (l >= r)
        return;

    int mid = l + r >> 1;
    merge_sort(q, l, mid), merge_sort(q, mid + 1, r);

    int k = 0, i = l, j = mid + 1;
    while (i <= mid && j <= r)
        if (q[i] <= q[j])
            ans[k++] = q[i++];
        else
            ans[k++] = q[j++];

    while (i <= mid)
        ans[k++] = q[i++];
    while (j <= r)
        ans[k++] = q[j++];

    for (int i = l, j = 0; i <= r; i++, j++)
        q[i] = ans[j];
}

void recursive_sort(int q[], int l, int r)
{
    if (l >= r)
        return;

    int x = q[l], i = l - 1, j = r + 1;
    while (i < j)
    {
        do
            i++;
        while (q[i] < x);
        do
            j--;
        while (q[j] > x);
        if (i < j)
            swap(&q[i], &q[j]);
    }

    recursive_sort(q, l, j);
    recursive_sort(q, j + 1, r);
}

void quick_sort(int q[], int l, int r)
{
    if (l >= r)
        return;

    int x = q[l + r >> 1], i = l - 1, j = r + 1;
    while (i < j)
    {
        do
            i++;
        while (q[i] < x);
        do
            j--;
        while (q[j] > x);
        if (i < j)
            swap(&q[i], &q[j]);
    }

    quick_sort(q, l, j);
    quick_sort(q, j + 1, r);
}

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
            scanf("%d", &q[i]);

        // qsort(q, n, sizeof(int), cmp);

        // bubble_sort(q, n);
        // select_sort(q, n);
        // insert_sort(q, n);
        // shell_sort(q, n);
        // merge_sort(q, 0, n - 1);
        // recursive_sort(q, 0, n - 1);
        quick_sort(q, 0, n - 1);

        for (int i = 0; i < n; i++)
            if (i != n - 1)
                printf("%d ", q[i]);
            else
                printf("%d\n", q[i]);
    }
}