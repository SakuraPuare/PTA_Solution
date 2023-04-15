#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> add(vector<int> &a, vector<int> &b)
{
    vector<int> c;
    for (int i = 0, t = 0; i < a.size() || i < b.size() || t; i++)
    {
        if (i < a.size())
            t += a[i];
        if (i < b.size())
            t += b[i];
        c.push_back(t % 10);
        t /= 10;
    }
    return c;
}

vector<int> minus(vector<int> &a, vector<int> &b)
{
    vector<int> c;
    for (int i = 0, t = 0; i < a.size() || i < b.size() || t; i++)
    {
        if (i < a.size())
            t += a[i];
        if (i < b.size())
            t -= b[i];
        c.push_back((t + 10) % 10);
        t = t < 0 ? -1 : 0;
    }
    while (c.size() > 1 && c.back() == 0)
        c.pop_back();
    return c;
}

int main()
{

    
    // int n;
    // while (cin >> n)
    // {
    //     string a;
    //     cin >> a;
    //     bool fa = a[0] == '-';
    //     vector<int> A;
    //     if (fa)
    //         for (int i = a.size() - 1; i >= 1; i--)
    //             A.push_back(a[i] - '0');
    //     else
    //         for (int i = a.size() - 1; i >= 0; i--)
    //             A.push_back(a[i] - '0');

    //     for (int i = 1; i < n; i++)
    //     {
    //         string b;
    //         cin >> b;
    //         bool fb = b[0] == '-';
    //         vector<int> B;

    //         if (fb)
    //             for (int i = b.size() - 1; i >= 1; i--)
    //                 B.push_back(b[i] - '0');
    //         else
    //             for (int i = b.size() - 1; i >= 0; i--)
    //                 B.push_back(b[i] - '0');

    //         A = add(A, B);
    //     }

    //     for (int i = A.size() - 1; i >= 0; i--)
    //         cout << A[i];
    //     cout << endl;
    // }
}