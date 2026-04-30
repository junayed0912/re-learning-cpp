#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int x;
        cin >> x;
        cout << min(x, x + 1) << endl;
    }
    return 0;
}