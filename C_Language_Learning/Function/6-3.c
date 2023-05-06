#include <stdio.h>

void fun(char q[])
{
    int p = 0, i = 0;
    while (q[i++] != '\0')
        if (q[i] >= 'a' && q[i] <= 'z' || q[i] >= 'A' && q[i] <= 'Z')
            q[p++] = q[i];
    q[p] = '\0';
}

int main()
{
    char item[80];
    gets(item);
    fun(item);
    printf("%s\n", item);
    return 0;
}