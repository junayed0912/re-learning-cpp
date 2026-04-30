#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool can_flip = false;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                can_flip = true;
                break;
            }
        }
        int res = (can_flip) ? 1 : s.size();
        cout << res << endl;
    }
    return 0;
}