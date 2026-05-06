// #include <bits/stdc++.h>
// using namespace std;
// int main(void){
//     int m, n, k;
//     cin >> m >> n >> k;
//     char grid[m][n];
//     for(int i = 0; i < m; i++){
//         for(int j = 0; j < n; j++){
//             cin >> grid[i][j];
//         }
//     }
//     for(int i = 0; i < m; i++){
//         for(int rowRepeat = 0; rowRepeat < k; rowRepeat++){
//             for(int j = 0; j < n; j++){
//                 for(int colRepeat = 0; colRepeat < k; colRepeat++){
//                     cout << grid[i][j];
//                 }
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main(void)
{

    freopen("cowsignal.in","r", stdin);
    freopen("cowsignal.out","w",stdout);
    int m, n, k;
    cin >> m >> n >> k;
    char grid[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int kr = 0; kr < k; kr++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int kc = 0; kc < k; kc++)
                {
                    cout << grid[i][j];
                }
            }
            cout << endl;
        }
    }
    return 0;
}