#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int n, m;
    cin >> n >> m;
    char grid[n + 1][m + 1];
    bool flipper = false;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= m; j++)
                cout << '#';
        }
        else
        {
            for (int j = 1; j <= m; j++)
            {
                if (flipper == false && j == m)
                    cout << '#';
                else if (flipper && j == 1)
                    cout << '#';
                else
                    cout << '.';
            }
            flipper = !flipper;
        }
        cout << endl;
    }
    return 0;
}