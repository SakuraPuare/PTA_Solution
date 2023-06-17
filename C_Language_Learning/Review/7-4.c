#include <stdio.h>

int main()
{
    unsigned int t;
    scanf("%u", &t);
    while (t)
        printf("%u ", t % 10), t /= 10;
    puts("");
}