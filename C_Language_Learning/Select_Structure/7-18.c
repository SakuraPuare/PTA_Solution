#include <stdio.h>

int main()
{
    double money;
    scanf("%lf", &money);
    double tax_money = money - 5000 * 12;
    if (tax_money <= 0)
        printf("salary=%.2lf,tax=0.00", money);
    else if (tax_money <= 36000)
        printf("salary=%.2lf,tax=%.2lf", money, tax_money * 0.03);
    else if (tax_money <= 144000)
        printf("salary=%.2lf,tax=%.2lf", money, tax_money * 0.1 - 2520);
    else if (tax_money <= 300000)
        printf("salary=%.2lf,tax=%.2lf", money, tax_money * 0.2 - 16920);
    else if (tax_money <= 420000)
        printf("salary=%.2lf,tax=%.2lf", money, tax_money * 0.25 - 31920);
    else if (tax_money <= 660000)
        printf("salary=%.2lf,tax=%.2lf", money, tax_money * 0.3 - 52920);
    else if (tax_money <= 960000)
        printf("salary=%.2lf,tax=%.2lf", money, tax_money * 0.35 - 85920);
    else
        printf("salary=%.2lf,tax=%.2lf", money, tax_money * 0.45 - 181920);
}
