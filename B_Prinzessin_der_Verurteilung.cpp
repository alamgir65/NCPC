#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    // Check all strings of length 1
    for (char c = 'a'; c <= 'z'; ++c)
    {
        string t = string(1, c);
        if (s.find(t) == string::npos)
        {
            cout << t << '\n';
            return;
        }
    }

    // Check all strings of length 2
    for (char c1 = 'a'; c1 <= 'z'; ++c1)
    {
        for (char c2 = 'a'; c2 <= 'z'; ++c2)
        {
            string t = {c1, c2};
            if (s.find(t) == string::npos)
            {
                cout << t << '\n';
                return;
            }
        }
    }

    // Check all strings of length 3
    for (char c1 = 'a'; c1 <= 'z'; ++c1)
    {
        for (char c2 = 'a'; c2 <= 'z'; ++c2)
        {
            for (char c3 = 'a'; c3 <= 'z'; ++c3)
            {
                string t = {c1, c2, c3};
                if (s.find(t) == string::npos)
                {
                    cout << t << '\n';
                    return;
                }
            }
        }
    }
    // check all strings of length 4
    for (char c1 = 'a'; c1 <= 'z'; ++c1)
    {
        for (char c2 = 'a'; c2 <= 'z'; ++c2)
        {
            for (char c3 = 'a'; c3 <= 'z'; ++c3)
            {
                for (char c4 = 'a'; c4 <= 'z'; ++c4)
                {
                    string t = {c1, c2, c3, c4};
                    if (s.find(t) == string::npos)
                    {
                        cout << t << '\n';
                        return;
                    }
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
