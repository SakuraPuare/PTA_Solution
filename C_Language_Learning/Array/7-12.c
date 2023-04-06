#include <stdio.h>

char q[100];

int main()
{
    int p = -1;
    while ((q[++p] = getchar()) != EOF)
        ;

    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 0; i < p; i++)
    {
        if (q[i] >= 'a' && q[i] <= 'z' || q[i] >= 'A' && q[i] <= 'Z')
            a++;
        else if (q[i] >= '0' && q[i] <= '9')
            b++;
        else if (q[i] == ' ')
            c++;
        else
            d++;
    }
    printf("zimu=%d\nshuzi=%d\nkongge=%d\nqita=%d", a, b, c, d);
}