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
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    vector<long long> lahub, floyd;
    long long first_lahub = ((a + x - 1) / x) * x;
    long long current_l = first_lahub;
    while (current_l <= b)
    {
        lahub.push_back(current_l);
        current_l += x;
    }
    long long first_floyd = ((a + y - 1) / y) * y;
    long long current_f = first_floyd;
    while (current_f <= b)
    {
        floyd.push_back(current_f);
        current_f += y;
    }
    vector<long long> counter(b + 1, 0);
    for (int i = 0; i < lahub.size(); i++)
    {
        counter[lahub[i]]++;
    }
    for (int i = 0; i < floyd.size(); i++)
    {
        counter[floyd[i]]++;
    }
    int result = 0;
    for (int i = a; i <= b; i++)
    {
        if (counter[i] > 1)
        {
            result++;
        }
    }
    cout << result;
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