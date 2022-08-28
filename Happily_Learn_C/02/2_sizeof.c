#include <stdio.h>

int main()
{
    // sizeof() 返回long unsigned int
    printf("%lu %lu %lu", sizeof(long double), sizeof(3.14L), sizeof(314LL));
    return 0;
}