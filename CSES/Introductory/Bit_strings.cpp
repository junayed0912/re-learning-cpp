#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
int main(void){
    int n;
    cin >> n;
    long long res = 1;
    for(int i = 1; i <= n; i++){
        res = (res * 2) % mod;
    }
    cout << res << endl;
    return 0;
}

/*
1 * 2 = 2
2 * 2 = 4
4 * 2 = 8
*/
