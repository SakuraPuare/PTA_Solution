#include <stdio.h>

int q[15];

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &q[i]);

    // smallest
    int min = 0;
    for (int i = 1; i < n; i++)
        if (q[i] < q[min])
            min = i;
    swap(&q[0], &q[min]);

    // biggest
    int max = 0;
    for (int i = 1; i < n; i++)
        if (q[i] > q[max])
            max = i;
    swap(&q[max], &q[n - 1]);

    for (int i = 0; i < n; i++)
        printf("%d ", q[i]);
}