#include <stdio.h>
int getWordNum(char ar1[], char ch);
int main()
{
    char string[81], c, n;
    gets(string);
    c = getchar();
    n = getWordNum(string, c);
    printf("%d", n);
    return 0;
}

int getWordNum(char ar1[], char ch)
{
    int i = 0, count = 0;
    while (ar1[i] != '\0')
    {
        while (ar1[++i] != ' ' && ar1[i] != '\0')
            ;
        if (ar1[i + 1] == ch || ar1[i + 1] == ch + 32 || ar1[i + 1] == ch - 32)
            count++;
    }
    count += (ar1[0] == ch || ar1[0] == ch + 32 || ar1[0] == ch - 32);
    return count;
}