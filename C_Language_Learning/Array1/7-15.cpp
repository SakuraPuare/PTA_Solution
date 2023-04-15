#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int N = 1e5;

bool is_prime(int n)
{
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    prime();
    string s;
    while (cin >> s)
    {
        if (s.compare("###") == 0)
            break;

        int n = stoi(s);
        if (is_prime(n))
            cout << n << endl;
        else
        {
            vector<int> ans;
            while (n != 1)
                for (int i = 2; i <= n; i++)
                    if (primes[i] && n % i == 0)
                    {
                        ans.push_back(i), n /= i;
                        break;
                    }
        }
    }
}