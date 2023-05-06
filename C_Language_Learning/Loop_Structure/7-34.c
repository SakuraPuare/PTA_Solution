#include <stdio.h>

int main()
{
    int N, U, D;
    int T = 0;

    scanf("%d %d %d", &N, &U, &D);

    while (N > 0)
    {
        if (N > U)
        {
            T += 2;
        }
        else
        {
            T += 1;
        }

        if (N <= U)
        {
            N = N - U;
        }
        else
        {
            N = N - U + D;
        }
    }

    printf("%d", T);

    return 0;
}
