#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    long long n;
    cin >> n;
    long long sum = (n * (n + 1)) / 2;
    if (sum % 2 == 0)
    {
        cout << "YES" << endl;
        long long s = sum / 2;
        vector<long long> set1;
        vector<long long> set2;
        for (int i = n; i >= 1; i--)
        {
            if (s >= i)
            {
                set1.push_back(i);
                s -= i;
            }
            else if (s < i)
            {
                set2.push_back(i);
            }
        }
        cout << set1.size() << endl;
        for (long long val1 : set1)
        {
            cout << val1 << " ";
        }
        cout << endl;
        cout << set2.size() << endl;
        for (long long val2 : set2)
        {
            cout << val2 << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

/*
5
1 2 3, 4, 5

7
1 2 4 7 = 14
3 5 6 = 14

7 6 1 = 14
2 3 4 5 = 14
*/