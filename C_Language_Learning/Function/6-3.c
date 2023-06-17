#include <stdio.h>
void fun(char s[]);
int main()
{
    char item[80];
    gets(item);
    fun(item);
    printf("%s\n", item);
    return 0;
}

/* 请在这里填写答案 */
void fun(char q[])
{
    int p = 0, i = 0;
    while (q[i++] != '\0')
        if (q[i] >= 'a' && q[i] <= 'z' || q[i] >= 'A' && q[i] <= 'Z')
            q[p++] = q[i];
    q[p] = '\0';
}
