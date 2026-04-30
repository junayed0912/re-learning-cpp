#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int currentStreak = 1;
    int bestStreak = 1;
    for(int i = 1; i < s.size(); i ++){
        if(s[i] == s[i-1]){
            currentStreak++;
        }else{
            currentStreak = 1;
        }
        bestStreak = max(bestStreak, currentStreak);
    }
    cout << bestStreak << "\n";
    return 0;
}