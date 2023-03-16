#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int num[30];
    for (int i = 0; i < 24; i++)
        cin >> num[i];

    int t = 0;
    while (cin >> t, t >= 0 && t < 24)
    {
        cout << num[t] << " " << ((num[t] > 50) ? "Yes" : "No") << endl;
    }
}