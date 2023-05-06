#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const string &a, const string &b)
{
    return a.length() < b.length();
}

int main()
{
    string s;
    vector<string> t;
    while (cin >> s)
    {
        if (s == "#")
            break;

        t.push_back(s);
    }

    stable_sort(t.begin(), t.end(), cmp);

    for (auto i : t)
        cout << i << " ";
}
