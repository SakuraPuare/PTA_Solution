#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int IsVowel(char x);

int main()
{
    char c;
    c = getchar();
    if (IsVowel(c))
    {
        putchar('Y');
    }
    else
    {
        putchar('N');
    }
    putchar('\n');
    return 0;
}

/* 你提交的代码将被嵌在这里 */
int IsVowel(char x)
{
    x = tolower(x);
    return x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u';
}