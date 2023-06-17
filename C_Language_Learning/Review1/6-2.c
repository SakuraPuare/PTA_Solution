#include <stdio.h>

// 输出大写金额
void CurPrint(double amount);

int main()
{
    double amount;
    scanf("%lg", &amount);
    CurPrint(amount);
    putchar('\n');
    return 0;
}

/* 你提交的代码将被嵌在这里 */

char *num[] = {
    "零",
    "壹",
    "贰",
    "叁",
    "肆",
    "伍",
    "陆",
    "柒",
    "捌",
    "玖",
};

char *unit[] = {
    "分",
    "角",
    "元",
    "拾",
    "佰",
    "仟",
    "万",
    "拾",
    "佰",
    "仟",
    "亿",
    "拾",
    "佰",
    "仟",
    "万",
    "拾",
    "佰",
    "仟",
    "亿"};

void CurPrint(double amount)
{
    long long interger = amount * 100 + 0.5;

    if (interger == 0)
        printf("零分");

    int digit[50];
    int size = 0;
    while (interger)
        digit[size++] = interger % 10, interger /= 10;

    for (int i = size - 1; i >= 0; i--)
        printf("%s%s", num[digit[i]], unit[i]);
}