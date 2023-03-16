#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int sum = 0, p = 0;
    for (int i = a; i <= b; i++)
    {
        if (p % 5 == 0 && p != 0)
            cout << endl;
        printf("%5d", i);
        sum += i;
        p++;
    }
    cout << endl
         << "Sum = " << sum << endl;
}