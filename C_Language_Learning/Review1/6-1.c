#include <stdio.h>
int fn(int a, int n);
int SumA(int a, int n);

int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a, n));
    printf("s = %d\n", SumA(a, n));

    return 0;
}

/* 请在这里填写答案 */
int fn(int a, int n)
{
    int x = 1;
    for (int i = 1; i < n; i++)
        x = x * 10 + 1;
    return a * x;
}

int SumA(int a, int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += fn(a, i);
    return sum;
}