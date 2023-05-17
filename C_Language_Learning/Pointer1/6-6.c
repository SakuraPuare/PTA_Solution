#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void fun(char s[]);

int main()
{
    char str[21];
    gets(str);
    fun(str);
    puts(str);
    return 0;
}

void swap(char *a, char *b)
{
    char t = *a;
    *a = *b;
    *b = t;
}

void fun(char s[])
{
    char a[21], b[21];
    int p = 0, q = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++)
        if ((s[i] - '0') % 2 == 0)
            a[p++] = s[i];
        else
            b[q++] = s[i];
    int i = 0;
    while (i < q)
        s[i] = b[i], i++;
    i = 0;
    while (i < p)
        s[i + q] = a[i], i++;
    s[p + q] = '\0';
}