#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define out(x) cout << x << '\n';
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll px, py, qx, qy;
        cin >> px >> py >> qx >> qy;

        vector<int> a(n);
        ll S = 0, mx = 0;
        for (int &x : a)
        {
            cin >> x;
            S += x;
            mx = max(mx, 1LL * x);
        }

        ll dx = px - qx, dy = py - qy;
        ll d = dx * dx + dy * dy;
        ll mn = max(0LL, 2 * mx - S);
        ll mn2 = mn * mn;
        S *= S;

        cout << (mn2 <= d && d <= S ? "Yes\n" : "No\n");
    }
    return 0;
}