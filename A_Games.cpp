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
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    int count = 0; 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                if (v[i].first == v[j].second)
                {
                    count++;
                }
            }
        }
    }
    cout << count;
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