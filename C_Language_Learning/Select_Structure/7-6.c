#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    if (a >= '0' && a <= '9')
        printf("digit");
    else if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
        printf("character");
    else
        printf("ERROR");
}