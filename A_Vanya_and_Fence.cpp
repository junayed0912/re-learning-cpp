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
    float n, h;
    cin >> n >> h;
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (val <= h)
            sum += 1;
        else
            sum += ceil(val / h);
    }
    cout << sum;
}

int main()
{
    fastio();
    int t = 1;
    solve();
    return 0;
}