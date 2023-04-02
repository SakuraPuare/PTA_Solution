#include <stdio.h>
#include <math.h>

int is_automorphic(int x)
{
    int l = 0;
    int t = x;
    while (t)
        t /= 10, l++;
    if ((x * x - x) % (int)pow(10, l) == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int a, b, f = 0;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
        if (is_automorphic(i))
            printf("%d\n", i), f = 1;
    if (!f)
        puts("None");
}