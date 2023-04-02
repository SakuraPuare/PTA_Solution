#include <stdio.h>

int main()
{
    int n;
    char c;
    scanf("%d %c", &n, &c);
    int layer = 0;
    while (layer * layer <= (n + 1) / 2)
        layer++;
    layer--;
    int max = 2 * layer - 1;
    for (int i = 0; i < layer; i++)
    {
        for (int j = 0; j < i; j++)
            printf(" ");
        for (int j = 0; j < max - 2 * i; j++)
            printf("%c", c);
        printf("\n");
    }
    for (int i = 1; i < layer; i++)
    {
        for (int j = 0; j < layer - i - 1; j++)
            printf(" ");
        for (int j = 0; j < 2 * i + 1; j++)
            printf("%c", c);
        printf("\n");
    }
    printf("%d", n - 2 * layer * layer + 1);
}