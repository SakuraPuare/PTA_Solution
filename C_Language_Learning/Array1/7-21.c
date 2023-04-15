#include <stdio.h>

const int N = 100;
char a[N];
char b[N];

int kmp(char a[], char b[], int x, int y)
{
    int i = 0, j = 0;
    while (i < x && j < y)
    {
        if (a[i] == b[j])
            i++, j++;
        else
            i = i - j + 1, j = 0;
    }
    if (j == y)
        return i - j;
    else
        return -1;
}

void remove(char a[], int x, int y, int l)
{
    for (int i = x; i + y < l; i++)
        a[i] = a[i + y];
}

int main()
{
    int x = -1;
    while ((a[++x] = getchar()) != '\n')
        ;
    a[x] = '\0';

    int y = -1;
    while ((b[++y] = getchar()) != '\n')
        ;
    b[y] = '\0';
    int t = kmp(a, b, x, y);
    while (~t)
        remove(a, t, y, x), x -= y, t = kmp(a, b, x, y);

    for (int i = 0; i < x; i++)
        printf("%c", a[i]);
}