#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    // for (int i = 0; i < n; i++)
    // {
    //     char s[10];
    //     scanf("%s", s);
    //     // 前三位数之和 后三位数之和
    //     int former = 0, latter = 0;
    //     for (int j = 0; j < 3; j++)
    //     {
    //         former += s[j] - '0';
    //         latter += s[j + 3] - '0';
    //     }
    //     if (former == latter)
    //         printf("You are lucky!\n");
    //     else
    //         printf("Wish you good luck.\n");
    // }

    for (int i = 0; i < n; i++)
    {
        int a, b, c, d, e, f;
        int x ;
        scanf("%d", &x);
        a = x / 100000;
        b = x / 10000 % 10;
        c = x / 1000 % 10;
        d = x / 100 % 10;
        e = x / 10 % 10;
        f = x % 10;
        // scanf("%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f);
        if (a + b + c == d + e + f)
            printf("You are lucky!\n");
        else
            printf("Wish you good luck.\n");
    }
}