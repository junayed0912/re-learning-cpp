#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);
    int n;
    cin >> n;
    vector <pair<int, int>> v;
    for(int i = 0; i < n; i++){
        int s, t, b;
        cin >> s >> t >> b;
        v.push_back({s, b});
        v.push_back({t, -b});
    }
    sort(v.begin(), v.end());
    int mx = 0, cur = 0;
    for(auto val : v){
        cur += val.second;
        mx = max(mx, cur);
    }
    cout << mx;
}

int main() {
    fastio();
    // int t = 1;
    // cin >> t;
    // while(t--) {
    //     solve();
    // }
    solve();
    return 0;
}