#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int mx = max(a, max(b, c));
        int final;
        if (mx == a)
            final = a - b - c;
        else if (mx == b)
            final = b - a - c;
        else
            final = c - a - b;

        if (final == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        ;
    }
    return 0;
}