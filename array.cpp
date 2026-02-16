#include <bits/stdc++.h>
using namespace std;
int cnt[200005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i <= n; i++)
        {
            cnt[i] = 0;
        }

        int result = -1;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            cnt[val]++;
            if (cnt[val] == 3)
            {
                if (result == -1)
                {
                    result = val;
                }
            }
        }
        cout << result << "\n";
    }

    return 0;
}