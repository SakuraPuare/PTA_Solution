#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;

        if (x % 2 == 0)
            cout << "!Love" << endl;
        else
            cout << "Love!" << endl;
    }
}