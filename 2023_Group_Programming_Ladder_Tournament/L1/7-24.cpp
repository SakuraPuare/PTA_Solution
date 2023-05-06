#include <iostream>
#include <regex>

using namespace std;

int main()
{

    int n;
    cin >> n;
    getchar();
    for (int i = 0; i < n; i++)
    {
        string str;
        getline(cin, str);
        cout << str << endl;
        str = regex_replace(str, regex("\\s+"), " ");
        str = regex_replace(str, regex("\\s,"), ",");
        str = regex_replace(str, regex("\\s\\."), ".");
        str = regex_replace(str, regex("\\s!"), "!");
        str = regex_replace(str, regex("\\s\\?"), "?");
        str = regex_replace(str, regex("\\s'"), "'");

        for (auto &it : str)
            if (isupper(it) && it != 'I')
                it = tolower(it);

        str = regex_replace(str, regex("\\?"), "!");
        str = regex_replace(str, regex("\\bI\\b"), "you");
        str = regex_replace(str, regex("\\bme\\b"), "you");
        str = regex_replace(str, regex("\\bcan you\\b"), "_I can");
        str = regex_replace(str, regex("\\bcould you\\b"), "_I could");
        str = regex_replace(str, regex("\\b_I\\b"), "I");

        if (str.front() == ' ')
            str.erase(str.begin());
        if (str.back() == ' ')
            str.pop_back();
        cout << "AI: " << str << endl;
    }
    return 0;
}