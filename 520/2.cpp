#include <iostream>

using namespace std;

int main()
{
    int t, a, b;
    cin >> t >> a >> b;
    bool x = a >= t;
    bool y = b >= t;

    if (x && y)
        cout << "*^_^*";
    else if (x && !y)
        cout << "T_T";
    else if (!x && y)
        cout << "-_-#";
    else
        cout << "-_-";
}