#include <stdio.h>

int main()
{
    int weekday;
    scanf("%d", &weekday);
    switch (weekday)
    {
    case 0:
        printf("Sunday");
        break;
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    default:
        printf("None");
        break;
    }

    // if (weekday == 0)
    //     printf("Sunday");
    // else if (weekday == 1)
    //     printf("Monday");
    // else if (weekday == 2)
    //     printf("Tuesday");
    // else if (weekday == 3)
    //     printf("Wednesday");
    // else if (weekday == 4)
    //     printf("Thursday");
    // else if (weekday == 5)
    //     printf("Friday");
    // else if (weekday == 6)
    //     printf("Saturday");
    // else
    //     printf("None");

}