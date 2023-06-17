#include <stdio.h>

int main()
{
    int n, cnt = 0;
    scanf("%d", &n);

    while (n != 1)
        if (n % 2 == 1)
            n = 3 * n + 1, cnt++;
        else
            n /= 2, cnt++;
    printf("%d", cnt);
}