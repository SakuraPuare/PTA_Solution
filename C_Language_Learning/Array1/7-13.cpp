#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> t;
    while (n--)
    {
        string s;
        cin >> s;
        t.push_back(s);
    }

    sort(t.begin(), t.end());

    for (auto i : t)
        cout << i << endl;
}