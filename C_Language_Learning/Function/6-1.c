#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void fun(int a[], int n)
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

int main()
{
    int i, a[10] = {3, 7, 5, 1, 2, 8, 6, 4, 10, 9};
    fun(a, 10);
    for (i = 0; i < 10; i++)
        printf("%3d", a[i]);
    return 0;
}