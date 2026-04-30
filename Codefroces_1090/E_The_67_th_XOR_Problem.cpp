#include <bits/stdc++.h>
using namespace std;
int main(void){
    int t;
    cin>> t;
    while(t--){
        long long int n;
        cin >> n;
        vector <long long int> arr(n);
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        long long int maxVal = 0;
        for(long long int i = 0; i < n; i++){
            for(long long int j = i+1; j < n; j++){
                maxVal = max(maxVal, arr[j]^arr[i]);
            }
        }
        cout << maxVal <<endl;
    }
}


/*
1st:
1 xor 2 = 3
1 xor 3 = 2
[3, 2]
2 xor 3 = 1

2nd:
2 xor 1 = 3
2 xor 3 = 1
[3, 1]
3 xor 1 = 2

3rd:
3 xor 1 = 2
3 xor 2 = 1
[2, 1]
2 xor 1 =  3


*/