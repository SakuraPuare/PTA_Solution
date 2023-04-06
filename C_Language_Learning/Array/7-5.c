#include <stdio.h>

int q[1000];

int main()
{
    int n, x;
    scanf("%d%d", &n, &x);
    for (int i = 0; i < n; i++)
        scanf("%d", &q[i]);
    int p = -1;
    while (p < n)
        if (q[++p] == x)
        {
            printf("%d", p);
            return 0;
        }
    puts("Not Found");
}