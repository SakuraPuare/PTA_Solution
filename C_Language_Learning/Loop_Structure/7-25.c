#include <stdio.h>

int iter(int x, int y, int k)
{
    // x 是水的数量
    // y 是瓶盖的数量
    // k 是瓶子的兑换比例
    if (x == 0 && y < k)
        return 0;
    if (x < k && y < k)
        return x;
    x += y / k;
    y %= k;
    return x + iter(x / k, (x % k) + y, k);
}

int main()
{
    int x, k;
    scanf("%d%d", &x, &k);
    printf("%d", iter(x, 0, k));
}