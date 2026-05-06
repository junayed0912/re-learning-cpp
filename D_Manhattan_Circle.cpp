#include <bits/stdc++.h>
using namespace std;
int main(void)
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (n == 1 && m == 1)
        {
            cout << 1 << " " << 1 << endl;
        }
        else
        {
            char grid[n + 1][m + 1];
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= m; j++)
                {
                    cin >> grid[i][j];
                }
            }
            vector<pair<int, int>> cnt(n + 1, pair<int, int>{0, 0});
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= m; j++)
                {
                    if (grid[i][j] == '#')
                    {
                        int first = cnt[i].first + 1;
                        int second = j;
                        cnt[i] = {first, second};
                    }
                }
            }
            int row, count, col;
            for (int i = cnt.size(); i >=2; i--)
            {
                if (cnt[i - 1].first < cnt[i].first)
                {
                    row = i - 1;
                    count = cnt[i - 1].first;
                    col = cnt[i - 1].second;
                    break;
                }
            }
            if (count == 1)
            {
                cout << row << " " << col << endl;
                ;
            }
            else
            {
                int firstIndJ = (col - count);
                col = (firstIndJ + col) / 2;
                cout << row << " " << col + 1 << "\n";
            }
        }
    }
    return 0;
}
/*
input
6
5 5
.....
.....
..#..
.....
.....
5 5
..#..
.###.
#####
.###.
..#..
5 6
......
......
.#....
###...
.#....
1 1
#
5 6
...#..
..###.
.#####
..###.
...#..
2 10
..........
...#......


expected:
3 3
3 3
4 2
1 1
3 4
2 4

got:
3 3
3 3
4 2
1 1
4 1
4 0


*/