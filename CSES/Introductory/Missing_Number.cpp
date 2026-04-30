#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n; cin >> n;
    long long s = n - 1;
    long long sumSec = 0;
    for(int i = 0; i < s; i++){
        int temp;
        cin >> temp;
        sumSec += temp;
    }
    long long sumOg = (n * (n + 1))/2;
    cout << (sumOg - sumSec) << "\n";
    return 0;
}