#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    long long num = pow(2, n);
    for (int i = 0; i < m; i++)
    {
        string s;
        long long t = num, ans = 0;
        cin >> s;
        for (auto c : s)
        {
            t /= 2;
            if (c == 'n')
                ans += t;
        }
        cout << ans + 1 << endl;
    }
}