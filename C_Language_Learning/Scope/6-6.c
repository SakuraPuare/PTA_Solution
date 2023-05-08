/* 用函数实现财务现金记账。先输入操作类型choice（1收入，2支出，0结束），再输入操作金额cash，计算现金剩余额balance，可多次操作直到输入操作类型为0时结束。要求定义并调用函数，其中现金收入与现金支出分别用不同函数实现。*/

#include <stdio.h>

double balance; /* 定义全局变量，保存现金余额 */
void income(double cash);
void expend(double cash);

int main(void)
{
    int choice;
    double cash;

    cash = 0;             /* 初始金额=0 */
    scanf("%d", &choice); /* 输入操作类型 */
    while (choice != 0)
    { /*  若输入类型为0，循环结束  */
        if (choice == 1 || choice == 2)
        {
            scanf("%lf", &cash); /* 输入现金 */
            if (choice == 1)
            {
                income(cash); /* 函数调用，计算现金收入 */
            }
            else
            {
                expend(cash); /* 函数调用，计算现金支出 */
            }
            printf("balance:%.2f\n", balance);
        }
        scanf("%d", &choice); /* 继续输入操作类型 */
    }

    return 0;
}

void income(double cash)
{
    balance += cash; /* 计算现金收入 */
}

void expend(double cash)
{
    balance -= cash; /* 计算现金支出 */
}