#include <stdio.h>

double price(double x);

int main()
{
    double buy, total;
    scanf("%lf", &buy); // 输入上半年销售量
    total = price(buy); // 计算总提成
    printf("sum_s=%.2f\n", total);
    scanf("%lf", &buy); // 输入下半年销售量
    total = price(buy); // 计算总提成
    printf("sum_s=%.2f\n", total);
    return 0;
}

double price(double x)
{
    static double sum = 0;
    sum += x;
    if (sum < 5000)
        return sum * 0.01;
    else if (sum < 10000)
        return sum * 0.05;
    else
        return sum * 0.1;
}