#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int x, cnt = 0;
        scanf("%d", &x);
        while (x != 1)
        {
            x & 1 ? x++ : x;
            x >>= 1;
            cnt++;
        }
        printf("%d\n", cnt);
    }
}