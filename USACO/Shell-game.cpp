// #include <bits/stdc++.h>
// using namespace std;
// int main(void){
//     int n;
//     cin >> n;
//     vector <int> shell_at_pos(4);
//     for(int i = 1; i <=3; i++){
//         shell_at_pos[i] = i;
//     }
//     vector <int> counter(4, 0);
//     for(int i = 1; i <=n; i++){
//         int a, b, g;
//         cin >> a >> b >> g;
//         swap(shell_at_pos[a], shell_at_pos[b]);
//         counter[shell_at_pos[g]]++;
//     }
//     cout << max(counter[1], max(counter[2], counter[3]));
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main(void){

    freopen("shell.in","r", stdin);
    freopen("shell.out","w",stdout);

    int n;
    cin >> n;
    vector <int> position(4);
    for(int i = 1; i <=3; i++){
        position[i] = i;
    }
    vector <int> counter(4, 0);

    while(n--){
        int a, b, g;
        cin >> a >> b >> g;
        swap(position[a], position[b]);
        counter[position[g]]++;
    }
    cout << max(counter[1], max(counter[2], counter[3]));

    return 0;
}