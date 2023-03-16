#include <stdio.h>

int main()
{
    // double price;
    // scanf("%lf", &price);
    float price;
    scanf("%f", &price);
    if (price > 0 && price < 100)
        printf("%.2f", price * 1.0);
    else if (price >= 100 && price < 200)
        printf("%.2f", price * 0.95);
    else if (price >= 200 && price < 500)
        printf("%.2f", price * 0.9);
    else if (price >= 500 && price < 1000)
        printf("%.2f", price * 0.85);
    else if (price >= 1000)
        printf("%.2f", price * 0.8);

    // if (price >= 1000)
    //     printf("%.2f", price * 0.8);
    // else if (price >= 500)
    //     printf("%.2f", price * 0.85);
    // else if (price >= 200)
    //     printf("%.2f", price * 0.9);
    // else if (price >= 100)
    //     printf("%.2f", price * 0.95);
    // else
    //     printf("%.2f", price * 1.0);
}