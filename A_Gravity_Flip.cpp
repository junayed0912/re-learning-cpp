#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(all(v));
    for(int val : v) cout << val << " ";
}

int main() {
    fastio();
    solve();
    return 0;
}