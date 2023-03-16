#include <iostream>

using namespace std;

int main()
{
    int n;
    char c;
    cin >> n >> c;
    int line = n % 2 == 0 ? n / 2 : n / 2 + 1;
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < n; j++)
            cout << c;
        cout << endl;
    }
}