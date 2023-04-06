#include <stdio.h>

char q[2000];

int main()
{
    int n;
    scanf("%d", &n);
    scanf("%s", q);
    int l = 0;
    while (q[l++] != '\0')
        ;
    l--;
    for (int i = 0; i < l; i++)
        printf("%c", q[((i - n % l) + l) % l]);
}