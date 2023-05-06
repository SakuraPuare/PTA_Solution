#include <stdio.h>

void PrintHex(int num, int cap)
{
    if (num < 16)
    {
        if (num < 10)
            putchar(num + '0');
        else if (cap)
            putchar(num - 10 + 'A');
        else
            putchar(num - 10 + 'a');
        return;
    }

    PrintHex(num / 16, cap);
    if (num % 16 < 10)
        putchar(num % 16 + '0');
    else if (cap)
        putchar(num % 16 - 10 + 'A');
    else
        putchar(num % 16 - 10 + 'a');
}

int main()
{
    int n, c;
    scanf("%d%d", &n, &c);
    PrintHex(n, c);
    putchar('\n');
    return 0;
}