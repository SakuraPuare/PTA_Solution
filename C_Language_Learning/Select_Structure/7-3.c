#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n % 5 == 1 || n % 5 == 2 || n % 5 == 3)
        printf("Fishing in day %d", n);
    else if (n % 5 == 4 || n % 5 == 0)
        printf("Drying in day %d", n);
    return 0;
}