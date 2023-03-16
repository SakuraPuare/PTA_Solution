#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    vector<int> num;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        num.push_back(t);
    }

    sort(num.begin(), num.end());
    int a = num[0], b = num[n - 1];
    int c = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > a)
            break;
        c++;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (num[i] < b)
            break;
        d++;
    }
    printf("%d %d\n%d %d", a, c, b, d);
}