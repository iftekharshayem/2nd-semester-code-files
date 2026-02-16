#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    string s;
    int d;
    while (t--)
    {
        cin >> s;
        if (s.size() <= 10)
            cout << s << "\n";
        else if (s.size() > 10)
        {
            d = s.size() - 2;
            cout << s[0] << d << s[s.size() - 1] << "\n";
        }
    }

    return 0;
}
