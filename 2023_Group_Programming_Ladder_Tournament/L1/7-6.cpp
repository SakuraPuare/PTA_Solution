#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long long n;
    vector<long long> m;
    cin >> n;

    for (long long i = 2; i * i <= n; i++)
        if (n % i == 0)
            if (i != n / i)
                m.push_back(i), m.push_back(n / i);
            else
                m.push_back(i);

    sort(m.begin(), m.end());

    if (m.size() == 1)
        cout << n << endl
             << m[0] << endl;
    else
    { // m中最长连续子序列
        long long x = 0, xp = 0;
        for (long long i = 0; i < m.size(); i++)
        {
            long long j = i;
            while (j < m.size() - 1 && m[j + 1] == m[j] + 1)
                j++;
            getchar();
        }
    }
}