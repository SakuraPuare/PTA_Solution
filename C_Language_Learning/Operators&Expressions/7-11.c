#include <stdio.h>

int main()
{
    putchar((getchar() + 2 - 'A') % 26 + 'A');
}