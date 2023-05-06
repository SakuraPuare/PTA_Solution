#include <stdio.h>

void MoveTower(int num, char src, char dst, char trs)
{
    if (num == 1)
    {
        printf("%d: %c -> %c\n", num, src, dst);
        return;
    }
    MoveTower(num - 1, src, trs, dst);
    printf("%d: %c -> %c\n", num, src, dst);
    MoveTower(num - 1, trs, dst, src);   
}

int main()
{
    int n;
    char s, d, t;
    scanf("%d %c %c %c", &n, &s, &d, &t);
    MoveTower(n, s, d, t);
    return 0;
}