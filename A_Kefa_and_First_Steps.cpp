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
    int prev;
    int NonDecCount = 0;
    int best = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (i == 0)
        {
            prev = val;
            NonDecCount++;
            best = max(best, NonDecCount);
        }
        else if (val >= prev)
        {
            NonDecCount++;
            best = max(best, NonDecCount);
            prev = val;
        }
        else
        {
            best = max(best, NonDecCount);
            prev = val;
            NonDecCount = 0;
            NonDecCount++;
        }
    }
    cout << best;
}

int main()
{
    fastio();
    solve();
    return 0;
}