#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int k;
    cin >> k;
    while (k--)
    {
        if (n % 10 != 0)
            n--;
        else if (n % 10 == 0)
        {
            n = n / 10;
        }
    }
    cout << n;

    return 0;
}