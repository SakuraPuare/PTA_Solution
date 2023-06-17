#include <stdio.h>
int b(int x, int i)
{
    int sum = 0;
    int t = x * i;
    while (t)
        sum += t % 10, t /= 10;
    return sum;
}

int a(int x)
{
    int t = b(x, 2);
    for (int i = 3; i <= 9; i++)
        if (t != b(x, i))
            return 0;
    return t;
}

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int x;
        scanf("%d", &x);
        int t = a(x);
        if (t)
            printf("%d\n", t);
        else
            printf("NO\n");
    }
}