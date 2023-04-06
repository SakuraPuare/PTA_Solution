#include <stdio.h>

char c[100];

int is_palindrome(char a[])
{
    int i = 0, j = -1;
    while (a[++j] != '\n')
        ;
    j--;
    while (i < j)
    {
        if (a[i] != a[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}

int main()
{
    int p = 0;
    while ((c[p++] = getchar()) != '\n')
        ;
    printf("%s", c);
    if (is_palindrome(c))
        printf("Yes");
    else
        printf("No");
}