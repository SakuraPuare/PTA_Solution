#include <stdio.h>

void Union(int *A, int *B, int *C, int A_size, int B_size, int *C_size)
{
    int p = 0;
    for (int i = 0; i < A_size; i++)
        C[p++] = A[i];
    for (int i = 0; i < B_size; i++)
        for (int j = 0; j < A_size; j++)
            if (B[i] == A[j])
                break;
            else if (j == A_size - 1)
                C[p++] = B[i];
    *C_size = p;
}

void display(int *T, int p)
{
    int i;
    printf("%d", p);
    if (p > 0)
    {
        for (i = 0; i < p - 1; i++)
            printf(" %d", T[i]);
        printf(" %d\n", T[i]);
    }
}
void read(int *B, int size)
{
    int i;
    for (i = 0; i < size; i++)
        scanf("%d", &B[i]);
}
int main()
{
    int a[100], b[100], c[200];
    int m, n, o = 0;
    scanf("%d", &m);
    read(a, m);
    scanf("%d", &n);
    read(b, n);
    Union(a, b, c, m, n, &o);
    display(c, o);
    return 0;
}