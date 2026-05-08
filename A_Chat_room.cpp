#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    string s;
    cin >> s;
    string t = "hello";
    int j = 0, i = 0;
    while(j < 5 && i < s.size()){
        if(t[j] == s[i]){
          j++;  
          i++;
        } 
        else{
            i++;
        } 
    }
    if(j == 5) cout << "YES";
    else cout << "NO";
}

int main() {
    fastio();
    // int t = 1;
    // cin >> t;
    // while(t--) {
        
    // }
    solve();
    return 0;
}