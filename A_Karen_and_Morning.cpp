#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    string s;
    cin >> s;
    if(s.front() == s.back() && s[s.size()-2] == s[1]){
        cout << 0 ;
    }else if(s == "23:59"){
        cout << 1;
    }else{
        string tempPal = {s[1], s[0]};
        string tempPal2 = {s[3], s[4]};
        int num = stol(tempPal);
        int num2 = stol(tempPal2);
        cout << abs(num - num2) ; 
    }
}

int main() {
    fastio();
    solve();
    return 0;
}