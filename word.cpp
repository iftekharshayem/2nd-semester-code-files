#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int uppercase = 0;
    // we are calculating by ascii value;
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] - 32 >= 33 && s[i] - 32 <= 58)
            uppercase++;
    }
    int lowercase = s.size() - uppercase;

    if (uppercase > lowercase)
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = toupper(s[i]);
        }

        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i];
        }
    }
    else if (lowercase > uppercase)
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i];
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i];
        }
    }

    return 0;
}