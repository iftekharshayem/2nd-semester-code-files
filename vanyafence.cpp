#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, h, k, l, result, count1 = 0, count = 0;
    cin >> n >> h;
    int arr[1005];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > h)
            count1 = count1 + 2;
        if (arr[i] <= h)
            count = count + 1;
    }
    result = count1 + count;
    cout << result << "\n";

    return 0;
}