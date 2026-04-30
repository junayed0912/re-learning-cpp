#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        
    }else if(n < 4){
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        vector<int> even;
        vector<int> odd;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                even.push_back(i);
            }
            else
            {
                odd.push_back(i);
            }
        }
        for(int x : even) cout << x << " ";
        for(int x : odd) cout << x << " ";
    }
    cout << endl;
    return 0;
}