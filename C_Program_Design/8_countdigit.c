#include <stdio.h>
#include <stdlib.h>

int CountDigit(int number, int digit)
{
    if (number < 0)
        number = -number;
    int count = 0;
    while (number != 0)
    {
        if (number % 10 == digit)
            count++;
        number /= 10;
    }
    return count;
}

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));
    system("pause");
    return 0;
}