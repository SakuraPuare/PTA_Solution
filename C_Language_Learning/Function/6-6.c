#include "stdio.h"
void fun(char s[], int b[])
{
    b[0] = b[1] = b[2] = b[3] = 0;
    int p = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
            b[0]++;
        else if (s[i] >= '0' && s[i] <= '9')
            b[1]++;
        else if (s[i] == ' ')
            b[2]++;
        else
            b[3]++;
    }
}

int main()
{
    char s1[80];
    int a[4] = {0};
    int k;
    gets(s1);
    fun(s1, a);
    for (k = 0; k < 4; k++)
        printf("%4d", a[k]);
    return 0;
}
