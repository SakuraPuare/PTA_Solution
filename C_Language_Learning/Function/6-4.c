#include <stdio.h>

void fun(char s[], char t[], int m);
int main()
{
    char s[80], t[80];
    int m;
    gets(s);
    scanf("%d", &m);
    fun(s, t, m);
    puts(t);
    return 0;
}

/* 请在这里填写答案 */
void fun(char s[], char t[], int m)
{
    int i = m, j = 0;
    while (t[j++] = s[i++], s[i] != '\0')
        ;
    t[j] = '\0';
}