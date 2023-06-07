#include <stdio.h>

int main()
{
    int t;
    char a;
    scanf("%d", &t);
    switch (t / 10)
    {
    case 10:
    case 9:
        a = 'A';
        break;
    case 8:
        a = 'B';
        break;
    case 7:
        a = 'C';
        break;
    case 6:
        a = 'D';
        break;
    default:
        a = 'E';
        break;
    }
    printf("%c", a);
}