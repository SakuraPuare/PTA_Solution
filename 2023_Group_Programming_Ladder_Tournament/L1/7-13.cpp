#include <iostream>

using namespace std;

long frac(int n)
{
    if (n == 0)
        return 1;
    else
        return n * frac(n - 1);
}

int main()
{
    int n;
    cin >> n;
    long long ans;
    for (int i = 1; i <= n; i++)
    {
        ans += frac(i);
    }
    cout << ans << endl;
}