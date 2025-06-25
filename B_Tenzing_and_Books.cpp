#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define all(x) x.begin(), x.end()
#define nl cout<<endl;
#define endl '\n'
#define love int main()
#define vtr vector
#define pii pair<int,int>
#define out(x) cout << x << '\n';
#define out2(x,y) cout << x << " " << y << '\n';
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;

void solve(){
    int n, x; cin >> n >> x;
    vii a(n), b(n), c(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0; i < n; i++) cin >> c[i];

    int cur = 0;
    for(int i = 0; i < n; i++) {
        if ((x | a[i]) == x) cur |= a[i];
        else break;
    }
    for(int i = 0; i < n; i++) {
        if ((x | b[i]) == x) cur |= b[i];
        else break;
    }
    for(int i = 0; i < n; i++) {
        if ((x | c[i]) == x) cur |= c[i];
        else break;
    }

    if (cur == x) cyes
    else cno
}

love {
    Alamgir
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
