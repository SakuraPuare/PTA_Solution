/*
如果A和B都是偶数则输出：A+B=两个数的和；
如果A和B都是奇数则输出：A-B=两个数的差；
如果A是奇数B是偶数则输出：A*B=两数积；
如果A是偶数B是奇数输出：A/B=两个数的商。
如果输入数据A为0或B为0，没有任何输出。
*/

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d,%d", &a, &b);
    int moda = a % 2, modb = b % 2;
    if (!a || !b)
        return 0;
    else if (moda + modb == 0)
        printf("%d+%d=%d", a, b, a + b);
    else if (moda + modb == 2)
        printf("%d-%d=%d", a, b, a - b);
    else if (moda && !modb)
        printf("%d*%d=%d", a, b, a * b);
    else if (!moda && modb)
        printf("%d/%d=%d", a, b, a / b);
}
