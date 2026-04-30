#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>> t;
    while(t--){
        vector <int> arr(7);
        cin >> arr[0];
        int mx = arr[0];
        for(int i = 1; i < 7; i++){
            cin>>arr[i];
            mx = max(mx, arr[i]);
        }
        int cnt = 0; 
        for(int i = 0; i < 7; i++){
            if(cnt == 0 && arr[i] == mx){
                cnt++;
            }else if(cnt == 1 && arr[i] == mx){
                arr[i] *=-1;
            }else{
                arr[i] *=-1;
            }
        }
        int sum = 0;
        for(int i = 0; i < 7; i++){
           sum += arr[i];
        }
        cout << sum << endl;
        
    }
}

/*

*/