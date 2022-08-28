#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    char s[1];
    scanf("%d%1s%d", &a, s, &b);
    (s[0] == '+' || s[0] == '-') ? (s[0] == '+' ? printf("%d", a + b) : printf("%d", a - b)) : printf("error!");
}