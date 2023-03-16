#include <stdio.h>

int main()
{
    int account;
    scanf("%d", &account);
    account /= 100000;
    switch (account)
    {
    case 1:
        printf("Hunan Agricultural University");
        break;
    case 2:
        printf("Jishou University");
        break;
    case 3:
        printf("Huaihua University");
        break;
    case 4:
        printf("Aerospace University");
        break;
    case 5:
        printf("Ocean University");
        break;
    default:
        printf("Other University");
        break;
    }
    return 0;
    // if (account == 1)
    //     printf("Hunan Agricultural University");
    // else if (account == 2)
    //     printf("Jishou University");
    // else if (account == 3)
    //     printf("Huaihua University");
    // else if (account == 4)
    //     printf("Aerospace University");
    // else if (account == 5)
    //     printf("Ocean University");
    // else
    //     printf("Other University");
    // char str[10];
    // scanf("%s", str);
    // if (str[0] == '1')
    //     printf("Hunan Agricultural University");
    // else if (str[0] == '2')
    //     printf("Jishou University");
    // else if (str[0] == '3')
    //     printf("Huaihua University");
    // else if (str[0] == '4')
    //     printf("Aerospace University");
    // else if (str[0] == '5')
    //     printf("Ocean University");
    // else
    //     printf("Other University");
}