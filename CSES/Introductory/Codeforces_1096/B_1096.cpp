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
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<char> st;
        if (n % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (char c : s)
            {
                if (!st.empty() && ((st.top() == '(' && c == ')') || (st.top() == ')' && c == '(')))
                {
                    st.pop();
                }
                else
                {
                    st.push(c);
                }
            }
            if (st.size() == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}

/*
())(  ()

)((

*/