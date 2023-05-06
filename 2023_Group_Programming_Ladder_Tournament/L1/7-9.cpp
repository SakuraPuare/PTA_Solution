#include <iostream>

using namespace std;

long long gcd(long long x, long long y)
{
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}

int main()
{
    long long n;
    long long x = 0, y = 0;
    scanf("%ld", &n);
    if (n > 1)
        scanf("%ld/%ld", &y, &x);
    for (long long i = 0; i < n - 1; i++)
    {
        long long a = x, b = y, c, d;
        scanf("%ld/%ld", &d, &c);

        if (x == 0)
            continue;

        x = a * c;
        y = b * c + a * d;

        long long g = gcd(x, y);
        x /= g;
        y /= g;
    }

    if (y < 0)
    {
        y = -y;
        x = -x;
    }
    long long z = 0;
    while (y / x > 0)
    {
        z++;
        y -= x;
    }

    if (z > 0)
    {
        if (y == 0)
            printf("%d", z);
        else
            printf("%d %d/%d", z, y, x);
    }
    else
    {
        printf("%d/%d", y, x);
    }
    return 0;
}