#include <stdio.h>

int main()
{
    long n = 0;
    scanf("%ld", &n);

    long sum = 0;

    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum += i;
    }

    if(sum == n)
        printf("YES");
    else
        printf("NO");

    return 0;
}