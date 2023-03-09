#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    // 如果能构成三角形
    if (a + b > c && a + c > b && b + c > a)
    {
        double area = sqrt(1.0 * (a + b + c) * (a + b - c) * (a + c - b) * (b + c - a)) / 4;
        double perimeter = a + b + c;
        printf("area = %.2f; perimeter = %.2f", area, perimeter);
    }
    else
        printf("These sides do not correspond to a valid triangle");
    return 0;
}