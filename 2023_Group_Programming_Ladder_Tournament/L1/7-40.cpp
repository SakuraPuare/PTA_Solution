#include <iostream>

using namespace std;

int main()
{
    int n, p = 2;
    int num[1000];
    scanf("%d %d %d", &num[0], &num[1], &n);
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
            printf("%d", num[i]);
        else
            printf("%d ", num[i]);
        int t = num[i] * num[i + 1];
        if (t > 9)
        {
            int tm = t;
            while (tm)
            {
                num[p] = tm % 10;
                p++;
                tm /= 10;
            }
            swap(num[p - 1], num[p - 2]);
        }
        else
        {
            num[p] = t;
            p++;
        }
    }
}