// #include <bits/stdc++.h>
// using namespace std;
// int main(void){
//    vector <int> capacity(3);
//    vector <int> milk(3);
//    for(int i = 0; i < 3; i++) cin >> capacity[i] >> milk[i];

//    for(int i = 0; i < 100; i++){
//         int from = i % 3;
//         int to = (i + 1) % 3;

//         int amt = min(milk[from], capacity[to] - milk[to]);

//         milk[from] -=amt;
//         milk[to] +=amt;
//    }
//     cout << milk[0] << "\n";
//     cout << milk[1] << "\n";
//     cout << milk[2] << "\n";
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main(void)
{

    freopen("mixmilk.in","r", stdin);
    freopen("mixmilk.out","w",stdout);
     vector<int> cap(4), milk(4);
     for (int i = 1; i <= 3; i++)
     {
          int a, b;
          cin >> a >> b;
          cap[i] = a;
          milk[i] = b;
     }
     int cnt = 1;
     vector<int> pours(100);
     for (int i = 0; i < 100; i++)
     {
          if (cnt < 4)
          {
               pours[i] = cnt++;
          }
          else
          {
               cnt = 1;
               pours[i] = cnt++;
          }
     }
     for (int i = 0; i < 100; i++)
     {
          int from = pours[i];
          int to;
          if (from == 1)
               to = 2;
          else if (from == 2)
               to = 3;
          else
               to = 1;

          int amount = min(milk[from], cap[to] - milk[to]);

          milk[from] -= amount;
          milk[to] += amount;
     }

     cout << milk[1] << "\n";
     cout << milk[2] << "\n";
     cout << milk[3] << "\n";
     return 0;
}