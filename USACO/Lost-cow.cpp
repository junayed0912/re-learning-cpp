#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);
    int x, y;
    cin >> x >> y;
    int pos = x;
    long long distance = 0;
    long long increment = 1;
    while (true)
    {
        if (y >= x && pos >= y || y < x && pos <= y)
        {
            break;
        }
        int sf = (x + (increment));
        distance += abs(sf - pos);
        pos = sf;

        increment *= -2;
    }
    int sub = abs(pos - y);
    cout << distance - sub << endl;
    return 0;
}


