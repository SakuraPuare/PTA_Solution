#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        char c;
        float a = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            char t;
            float b;
            scanf(" %c %f", &t, &b);
            sum += b;
            if (b > a)
                c = t, a = b;
        }
        printf("%c %.1f\n", c, sum / n);
    }
}