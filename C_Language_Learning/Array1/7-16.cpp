#include <iostream>
#include <vector>

using namespace std;

vector<int> add(vector<int> &a, int b)
{
    vector<int> c;
    for (int i = 0, t = b; i < a.size() || t; i++)
    {
        if (i < a.size())
            t += a[i];
        c.push_back(t % 10);
        t /= 10;
    }
    return c;
}

vector<int> times(vector<int> &a, int b)
{
    vector<int> c;
    for (int i = 0, t = 0; i < a.size() || t; i++)
    {
        if (i < a.size())
            t += a[i] * b;
        c.push_back(t % 10);
        t /= 10;
    }
    return c;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> ans = {k};
        for (int i = 1; i < n; i++)
        {
            auto t = add(ans, 1);
            ans = times(t, 2);
        }

        for (int i = ans.size() - 1; i >= 0; i--)
            cout << ans[i];
        cout << endl;
    }
}