#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, val;
    stack<int> st;
    queue<int> q;

    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> val;
        st.push(val);
    }

    cin >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> val;
        q.push(val);
    }

    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    bool isSame = true;
    while (!st.empty() && !q.empty())
    {
        if (st.top() != q.front())
        {
            isSame = false;
            break;
        }
        st.pop();
        q.pop();
    }

    if (isSame)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}