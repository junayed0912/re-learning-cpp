// #include <bits/stdc++.h>
// using namespace std;

// #define fastio()                      \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);
// #define ll long long
// #define pb push_back
// #define all(x) (x).begin(), (x).end()

// void solve()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     if (n < 26) {
//         cout << "NO" << endl;
//         return;
//     }

//     vector<bool> visited(26, false);
//     int count = 0;

//     for (char c : s) {
//         c = tolower(c);
//         if (isalpha(c)) {
//             int index = c - 'a';
//             if (!visited[index]) {
//                 visited[index] = true;
//                 count++;
//             }
//         }
//     }

//     if (count == 26) cout << "YES";
//     else cout << "NO";
// }

// int main()
// {
//     fastio();
//     solve();
//     return 0;
// }


