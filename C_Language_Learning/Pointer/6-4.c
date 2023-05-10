#include <stdio.h>
void fun(long s, long *t);
int main()
{
    long s, t;
    scanf("%ld", &s);
    fun(s, &t);
    printf("The result is: %ld\n", t);
    return 0;
}

void fun(long s, long *t)
{
    *t = 0;
    long x = s, y = 0;
    while (x != 0)
    {
        int r = x % 10;
        if (r % 2 == 0)
            y = y * 10 + r;
        x /= 10;
    }
    while (y != 0)
    {
        *t = *t * 10 + y % 10;
        y /= 10;
    }
}