#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    int w;
    cin >> w;
    if(w != 2 && w % 2 == 0){
        cout << "YES";
    }else{
        cout << "NO";
    }
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