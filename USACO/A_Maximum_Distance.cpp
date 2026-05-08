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
    vector<int> x(n), y(n);
    for (int &t : x)
        cin >> t;
    for (int &t : y)
        cin >> t;
    long long mx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int dx = x[i] - x[j];
            int dy = y[i] - y[j];
            long long dis = dx * dx + dy * dy;

            mx = max(mx, dis);
        }
    }
    cout << mx;
}

int main()
{
    fastio();
    solve();
    return 0;
}