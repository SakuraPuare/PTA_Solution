#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    printf("%c\n", (a - 'a' + 1) % 26 + 'a');
}