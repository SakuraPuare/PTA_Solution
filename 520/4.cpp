#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> ava;
    vector<vector<int>> nt;

    ava.resize(12);
    nt.resize(12);

    for (int i = 0; i < 12; i++)
    {
        int x;
        cin >> x;
        x--;

        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int t;
            cin >> t;
            ava[x].push_back(t);
        }

        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int t;
            cin >> t;
            nt[x].push_back(t);
        }
    }

    int n;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;

        bool a1 = false, a2 = false;
        for (int i = 0; i < ava[x - 1].size(); i++)
            if (ava[x - 1][i] == y)
                a1 = true;

        for (int i = 0; i < nt[x - 1].size(); i++)
            if (nt[x - 1][i] == y)
                a2 = true;

        for (int i = 0; i < ava[y - 1].size(); i++)
            if (ava[y - 1][i] == x)
                a1 = true;

        for (int i = 0; i < nt[y - 1].size(); i++)
            if (nt[y - 1][i] == x)
                a2 = true;

        if (a1 && !a2)
            cout << "Yes" << endl;
        else if (!a1 && a2)
            cout << "No" << endl;
        else
            cout << "NA" << endl;
    }
}