#include <bits/stdc++.h>
using namespace std;
bool solve(vector<int> arr){
    bool has_hundred = false;
    for(int val : arr){
        if(val == 100){
            has_hundred = true;
        }
    }
    return has_hundred;
}
int main(void){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> arr;
        
        for(int i = 0; i < n; i++){
            int elm;
            cin >> elm;
            arr.push_back(elm);
        }
        string decision = (solve(arr) == true) ? "Yes" : "No";
        cout << decision <<endl;
    }
    return 0;
}