// #include <bits/stdc++.h>
// using namespace std;
// int main(void){
//     int n, m;
//     cin >> n >> m;
//     vector <int> rSeg(101), bSeg(101);
//     int ind = 1;
//     for(int i = 0; i < n; i++){
//         int a, b;
//         cin >> a >> b;
//         for(int j = 1; j <= a; j++){
//             rSeg[ind++]=b;
//         }
//     }
//     ind = 1;
//     for(int i = 0; i < m; i++){
//         int a, b;
//         cin >> a >> b;
//         for(int j = 1; j <= a; j++){
//             bSeg[ind++] = b;
//         }
//     }
//     int ans = 0;
//     for(int i = 1; i <= 100; i++){
//         ans = max(ans, bSeg[i] - rSeg[i]);
//     }
//     cout << max(0, ans) << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main(void)
{

    freopen("speeding.in","r", stdin);
    freopen("speeding.out","w",stdout);
    int n, m;
    cin >> n >> m;
    vector<int> limit(101), Bspeed(101);
    int ind = 1;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        for (int j = 1; j <= a; j++)
        {
            limit[ind++] = b;
        }
    }
    ind = 1;
    for (int i = 1; i <= m; i++)
    {
        int a, b;
        cin >> a >> b;
        for (int j = 1; j <= a; j++)
        {
            Bspeed[ind++] = b;
        }
    }
    int mx = 0;
    for (int i = 1; i <= 100; i++)
    {
        mx = max(mx, Bspeed[i] - limit[i]);
    }
    cout << mx;
    return 0;
}