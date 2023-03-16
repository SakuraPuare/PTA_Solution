#include <iostream>

using namespace std;

int main()
{
    int n, k, m;
    cin >> n >> k >> m;
    cout << ((n - k * m > 0) ? (n - k * m) : 0) << endl;
}