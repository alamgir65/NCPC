#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define cyes cout << "Yes" << endl;
#define cno cout << "No" << endl;
#define all(x) x.begin(), x.end()
#define nl cout << endl;
#define endl '\n'
#define love int main()
#define vtr vector
#define pii pair<int, int>
#define out(x) cout << x << '\n';
#define out2(x, y) cout << x << " " << y << '\n';
#define vii vector<int>
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    int s = 0;
    vii v;
    if ((k == 1 && x == 1) || (k == 2 && x == 1 && n % 2 != 0))
    {
        no 
        return;
    }
    if (x != 1)
    {
        while (s < n)
        {
            s++;
            v.pb(1);
        }
    }else{
        if(n%2 ==0){
            while (s < n)
            // hudai
            {
                s += 2;
                v.pb(2);
            }
        }else{
            s = 3;
            v.pb(3);
            while (s < n)
            {
                s += 2;
                v.pb(2);
            }
        }
    }
    yes
            out(v.size()) for (auto i : v) cout
        << i << " ";
    nl;
}
love
{
    Alamgir int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}