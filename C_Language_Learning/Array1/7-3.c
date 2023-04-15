#include <stdio.h>

const int N = 1e5 + 10;
int q[N], ans[N];

// 0 zheng 1 fu

int main()
{
    int n;
    scanf("%d", &n);

    /*
    Solution 1
    */

    for (int i = 2; i <= n; i++)
        for (int j = 1; i * j <= n; j++)
            q[i * j] = !q[i * j];

    int p = 0;
    for (int i = 1; i <= n; i++)
        if (!q[i])
            ans[p++] = i;

    /*
    Solution 2
    */

    // int p = 0;

    // for (int i = 1; i * i <= n; i++)
    //     ans[p++] = i * i;

    for (int i = 0; i < p; i++)
        if (i != p - 1)
            printf("%d ", ans[i]);
        else
            printf("%d", ans[i]);
}