#include <stdio.h>

int main()
{   
    // sizeof() 返回long unsigned int
    printf("%lu %lu %lu %lu %lu %lu %lu", sizeof(double), sizeof(long double), sizeof(long long), sizeof(3.14F), sizeof(3.14), sizeof(521), sizeof(521LL));
    return 0;
}