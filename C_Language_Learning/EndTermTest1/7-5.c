/*letter = 英文字母个数, blank = 空格或回车个数, digit = 数字字符个数, other = 其他字符个数*/
#include <stdio.h>

int main()
{
    int letter = 0, blank = 0, digit = 0, other = 0;

    for (int i = 0; i < 10; i++)
    {
        char x;
        scanf("%c", &x);
        if (x >= 'a' && x <= 'z' || x >= 'A' && x <= 'Z')
            letter++;
        else if (x == ' ' || x == '\n')
            blank++;
        else if (x >= '0' && x <= '9')
            digit++;
        else
            other++;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
}