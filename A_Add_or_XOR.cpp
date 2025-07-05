#include <bits/stdc++.h>
#define ll long long
#define out(x) cout << x << '\n';
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, x, y;
        cin >> a >> b >> x >> y;
        if (a > b)
        {
            if (a % 2 != 0 && a - b == 1)
                out(y)
            else
                out(-1)
        }
        else
        {
            ll ans = 0;
            while (a < b)
            {
                if (a % 2 == 0 && y < x)
                {
                    ans += y;
                    a ^= 1;
                }
                else
                {
                    a++;
                    ans += x;
                }
            }
            out(ans)
        }
    }
    return 0;
}