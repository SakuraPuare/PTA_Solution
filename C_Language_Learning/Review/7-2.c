#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char c;
        char s[100];
        scanf("%s %c", s, &c);

        int cnt = 0;
        int p = 0;
        while (s[p] != '\0')
            if (s[p] != c)
                printf("%c", s[p++]), cnt++;
            else
                p++;

        if (cnt != 0)
            printf("\n");
        else
            puts("NULL");
    }
}