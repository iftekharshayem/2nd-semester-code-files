#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        long long temp_a = a, temp_b = b;
        long long current_size = 1;
        long long layers1 = 0;
        int turn = 0;

        while (true)
        {
            if (turn == 0)
            {
                if (temp_a >= current_size)
                {
                    temp_a -= current_size;
                    layers1++;
                }
                else
                    break;
                turn = 1;
            }
            else
            {
                if (temp_b >= current_size)
                {
                    temp_b -= current_size;
                    layers1++;
                }
                else
                    break;
                turn = 0;
            }
            current_size *= 2;
        }

        temp_a = a;
        temp_b = b;
        current_size = 1;
        long long layers2 = 0;
        turn = 1;

        while (true)
        {
            if (turn == 1)
            {
                if (temp_b >= current_size)
                {
                    temp_b -= current_size;
                    layers2++;
                }
                else
                    break;
                turn = 0;
            }
            else
            {
                if (temp_a >= current_size)
                {
                    temp_a -= current_size;
                    layers2++;
                }
                else
                    break;
                turn = 1;
            }
            current_size *= 2;
        }

        if (layers1 > layers2)
        {
            cout << layers1 << "\n";
        }
        else
        {
            cout << layers2 << "\n";
        }
    }
    return 0;
}