#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        string tmp = a;
        a[0] = b[0];
        b[0] = tmp[0];
        cout << a << " " << b << endl;
    }
    return 0;
}