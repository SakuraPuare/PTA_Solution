#include <stdio.h>
#include <math.h>
#include <string.h>

// int is_alien(char *a, char *b)
// {
//     int x = 0, y = 0;
//     while (*a)
//         x += *a++ - '0';
//     while (*b)
//         y += *b++ - '0';
//     return x == y;
// }

// int main()
// {
//     char a[100], b[100];
//     scanf("%s %s", a, b);

//     printf("%s %s\n", a, b);

//     if (strcmp(a, b) == 0)
//         puts("Equal");
//     else if (is_alien(a, b))
//         puts("ALIEN");
//     else
//         puts("Different");
// }

int is_alien(long long a, long long b, int x, int y)
{
    int m = 0, n = 0;
    while (a)
        m += a % 10, a /= 10;
    while (b)
        n += b % 10, b /= 10;
    return x == y;
}

int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);

    printf("%lld %lld\n", a, b);
    if (a == b)
        puts("Equal");
    else
    {
        int x = 0, y = 0;
        while (a)
            x += a % 10, a /= 10;
        while (b)
            y += b % 10, b /= 10;
        if (x != y)
            puts("Different");
        else if (is_alien(a, b, x, y))
            puts("ALIEN");
        else
            puts("Different");
    }
}