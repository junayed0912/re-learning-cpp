#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long row, col;
        cin >> row >> col;
        long long ans;
        long long m = max(row, col);
        if (m % 2 == 0)
        {
            if (row == m)
            {
                ans = (m * m - col + 1);
            }
            else
            {   
                ans = (m - 1) * (m - 1) + row;
            }
        }else{
            if(col == m){
                ans = (m * m - row + 1);
            }else{
                ans = (m - 1) * (m - 1) + col;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

/*
problem Number spiral.

4 2 (row bigger) == so do 4 * 4 = 16, since row
starts from the left most so the cooridination 4,1

by analyzing the pattern I realized that if the row
is even and after finding then the more go towards the right
it decrase, if row is odd it does the opposite, obviously it's
applicable till n-1 if start the index from 1.

col is the opposite, meaning by calculating the top vaule we can go down and
the value will decrease if the col is odd, otherwise the opposite.




*/