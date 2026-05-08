#include <bits/stdc++.h>
using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
int x = 0;
void solve()
{
    string s;
    cin >> s;
    if (s[0] == '+')
        ++x;
    else if (s[0] == '-')
        --x;
    else if (s[0] == 'X' && s[s.size() - 1] == '+')
        x++;
    else
        x--;
}

int main()
{
    fastio();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    cout << x;
    return 0;
}