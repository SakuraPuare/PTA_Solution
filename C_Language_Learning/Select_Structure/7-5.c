#include <stdio.h>

int main()
{
    char str[10];
    scanf("%s", str);
    if (str[0] == '1')
        printf("Hunan Agricultural University");
    else if (str[0] == '2')
        printf("Jishou University");
    else if (str[0] == '3')
        printf("Huaihua University");
    else if (str[0] == '4')
        printf("Aerospace University");
    else if (str[0] == '5')
        printf("Ocean University");
    else
        printf("Other University");
}