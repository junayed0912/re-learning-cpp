#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    vector <int> v(3);
    for(int i = 0; i < 3; i++){
        cin >> v[i];
    }
    //Option 1
    // int minimum = 105;
    // for(int i = 0; i < 3; i++){
    //     int sum = 0;
    //     for(int j = 0; j < 3; j++){
    //         if(i == j) continue;
    //         else{
    //             sum+= abs(v[i] - v[j]);
    //         }
    //     }
    //     minimum = min(minimum, sum);
    // }
    // cout << minimum;

    //Option 2
    sort(all(v));
    cout << v[2]-v[0];
}

int main() {
    fastio();
    solve();
    return 0;
}