#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    for(long long i = 1; i <= n; i++){
        long long total_ways = ((i*i)*((i*i)-1))/2;
        long long attacking_ways = 4 * (i-1) * (i - 2);
        long long res = total_ways - attacking_ways;
        cout << res << endl;
    }
    return 0;
}