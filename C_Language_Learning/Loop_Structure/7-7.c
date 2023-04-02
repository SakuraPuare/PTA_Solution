#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            x > y ? a++ : b++;
        }
        // printf("%d %d", a, b);
        a == b ? puts("CONTINUE") : (a > b ? puts("Sg") : puts("Gs"));
    }
}