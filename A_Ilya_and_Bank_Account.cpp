#include <bits/stdc++.h>
using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    if (n > 0)
    {
        cout << n;
    }
    else
    {
        string s = to_string(n);
        if (s[s.size() - 2] > s[s.size() - 1])
        {
            if (s[s.size() - 3] == '-' && s[s.size() - 1] == '0')
            {
                s[s.size() - 3] = s[s.size() - 1];
                s.pop_back();
                s.pop_back();
                cout << s;
            }
            else
            {
                s[s.size() - 2] = s[s.size() - 1];
                s.pop_back();
                cout << s;
            }
        }
        else
        {
            s.pop_back();
            cout << s;
        }
    }
}

int main()
{
    fastio();
    // int t = 1;
    // cin >> t;
    // while(t--) {

    // }
    solve();
    return 0;
}