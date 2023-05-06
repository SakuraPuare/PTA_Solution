#include <stdio.h>

void printdigits(int n)
{
    if (n == 0)
    {
        printf("0\n");
        return;
    }

    int len = 0, t = n;
    while (t)
        t /= 10, len++;
    int a[len];
    for (int i = 0; i < len; i++)
        a[i] = n % 10, n /= 10;
    for (int i = len - 1; i >= 0; i--)
        printf("%d\n", a[i]);
}

int main()
{
    int n;
    scanf("%d", &n);
    printdigits(n);
    return 0;
}
