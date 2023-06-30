#include <stdio.h>

int q[1000];

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    for (int i = 0; i < n; i++)
        scanf("%d", &q[i]);
    int a = -1;
    for (int i = 0; i < n; i++)
        if (q[i] == x)
            a = i;
    if (~a)
        puts("Not Found");
    else
        printf("%d", a);
}

// int main()
// {
//     int n, x, cnt = -1;
//     scanf("%d%d", &n, &x);
//     for (int i = 0; i < n; i++)
//     {
//         int t;
//         scanf("%d", &t);
//         if (t == x)
//             cnt = i;
//     }

//     if (cnt == -1)
//         puts("Not Found");
//     else
//         printf("%d", cnt);
// }