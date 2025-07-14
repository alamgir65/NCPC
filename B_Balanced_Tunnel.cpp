#include <bits/stdc++.h>

#define YES cout << "YES\n";

#define NO cout << "NO\n";

#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

typedef long long ll;

using namespace std;

int main()
{

    fast

        ll tt = 1;

    while (tt--)
    {

        ll n, i, j;

        cin >> n;

        vector<ll> a(n);

        map<ll, ll> mp;

        for (i = 0; i < n; i++)
            cin >> a[i];

        for (i = 0; i < n; i++)

        {

            ll x;

            cin >> x;

            mp[x] = i;
        }

        ll ans = 0;

        for (i = 1; i < n; i++)

        {

            ll n1 = mp[a[i - 1]];

            ll n2 = mp[a[i]];

            if (n2 < n1)

            {

                ans++;

                a[i] = a[i - 1];
            }
        }

        cout << ans << '\n';
    }

    return 0;
}