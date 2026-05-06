#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    // freopen("shuffle.in", "r", stdin);
    // freopen("shuffle.out", "w", stdout);
    int n;
    cin >> n;
    vector<int> postions(n + 1), uniqueId(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> postions[i];
    for (int i = 1; i <= n; i++)
        cin >> uniqueId[i];


    for (int i = 1; i <= 3; i++)
    {
        vector <int> next (n+1);
        for(int j = 1; j <=n; j++){
            next[j] = uniqueId[postions[j]];
        }
        uniqueId = next;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << uniqueId[i] << endl;
    }
    return 0;
}