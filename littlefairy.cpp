#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a[105];
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int present[2000];
        for (int k = 0; k < 2000; k++)
        {
            present[k] = 0;
        }
        int distinct = 0;
        for (int s = 0; s < n; s++)
        {

            if (present[a[s]] == 0)
            {
                present[a[s]] = 1;
                distinct++;
            }
        }
        while (present[distinct] == 0)
        {
            distinct++;
            present[distinct] ==1;
        }
        cout << distinct << "\n";
    }
    return 0;
}