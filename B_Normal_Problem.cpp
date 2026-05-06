#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'q'){
                s[i] = 'p';
            }else if(s[i] == 'p'){
                s[i] = 'q';
            }
        }
        reverse(s.begin(), s.end());
        cout << s << "\n";
    }
    return 0;
}
