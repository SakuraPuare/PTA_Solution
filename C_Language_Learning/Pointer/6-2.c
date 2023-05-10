#include <stdio.h>
void fun(char *s, char *t);
int main()
{
    char s[100], t[100];
    scanf("%s", s);
    fun(s, t);
    printf("%s\n", t);
    return 0;
}

void fun(char *s, char *t)
{
    int len = -1;
    while (s[++len] != '\0')
        ;
    int p = 0;
    for (int i = len - 1; i >= 0; i--)
        t[p++] = s[i];
    for (int i = 0; i < len; i++)
        t[p++] = s[i];
    t[p] = '\0';
}
