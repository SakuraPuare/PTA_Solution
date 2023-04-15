#include <stdio.h>

int q[100000];

int main()
{
    int p = 0;
    while ((q[p++] = getchar()) != EOF)
        ;

    int cnt = 0;
    for (int i = 0; i < p; i++)
        if (q[i] == ' ')
            cnt++;

    printf("%d", cnt + 1);
}