#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for (int len = s.size() - 1; len >= 0; len--)
        for (int i = 0; i + len < s.size(); i++)
        {
            string sub = s.substr(i, len + 1);
            string sub1(sub);
            reverse(sub.begin(), sub.end());
            if (sub1.compare(sub) == 0)
            {
                cout << len + 1;
                return 0;
            }
        }
    cout << "0";
}