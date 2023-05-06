#include <stdio.h>
void F(int n)
{
    printf("%d", n);
    if (n == 1)
        return;
    else if (n % 2 == 0)
        printf(" "), F(n / 2);
    else
        printf(" "), F(3 * n + 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    F(n);
    return 0;
}