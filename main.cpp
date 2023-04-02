#include <iostream>

using namespace std;

int main(void)
{
    int n, k;
    float score, sum, ave;
    sum = 0.0;
    for (n = 1; n <= 10; n++)
    {
        for (k = 1; k <= 4; k++)
        {
            scanf("%f", &score);
            sum += score;
        }
        ave = sum / 4.0;
        printf("NO%d:%f\n", n, ave);
    }
    return 0;
}
