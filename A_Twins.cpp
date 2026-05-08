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
    vector<int> v;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
        sum += val;
    }
    sort(v.rbegin(), v.rend());
    int newSum = (sum / 2);
    int tmp = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        tmp += v[i];
        ++count;
        if (tmp > newSum)
        {
            break;
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