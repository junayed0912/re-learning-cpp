#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    map <string, int> mp;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        mp[s]++;
    }
    string ans;
    int mx = 0;
    for(auto &[key, val]: mp){
        if(val >= mx){
            mx = val;
            ans = key;
        }
    }
    cout << ans;
}

int main() {
    fastio();
    solve();
    return 0;
}