#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(x % 2 != 0 && y % 2 != 0){
            cout << "NO"<<endl;
        }else{
            cout << "YES" <<endl;
        }
    }
}

/*
4 6


*/