#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 0;
    // int digit = 0;
    cin >> n;

    // while (n > 0)
    // {
    //     digit++;
    //     n /= 10;
    // }

    // for (; n > 0; digit++)
    // {
    //     n /= 10;
    // }

    string s = to_string(n);
    int a = -1;
    if (a > 0)
    {
        if (a > 5)
        {
            cout << 1;
        }
        else
        {
            cout << 2;
        }
    }
    else
    {
        cout << 3;
    }
    cout << s.size() << endl;
}