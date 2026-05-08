#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    string s;
    cin >> s;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '+'){
            pq.push(s[i]-'0');
        }
    }
    while(!pq.empty()){
        if(pq.size() == 1){
            cout << pq.top();
            pq.pop();
        }else{
            cout << pq.top() <<"+";
            pq.pop();
        }
    }

}

int main() {
    fastio();
    // int t = 1;
    // cin >> t;
    // while(t--) {
    //     
    // }
    solve();
    return 0;
}