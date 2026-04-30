#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <long long> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long steps = 0;
    for(int i = 1; i < n; i++){
        if(arr[i-1] > arr[i]){
            long long moves = arr[i-1] - arr[i];
            arr[i] = arr[i] + moves;
            steps+=moves;
        }
    }
    cout << steps << "\n";
    return 0;
}

/*
6
6 4 2 5 3 1

7
7 5 3 1 4 2 6
*/