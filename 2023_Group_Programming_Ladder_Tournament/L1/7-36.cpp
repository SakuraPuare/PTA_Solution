#include <iostream>

using namespace std;

int main()
{
    int n, price;
    cin >> n >> price;
    for (int i = 0; i < n; i++)
    {
        double p;
        cin >> p;
        if (p < price)
            printf("On Sale! %.1lf\n", p);
    }
}