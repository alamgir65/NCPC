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
    ll n,m; cin>>n>>m;
    vector<vector<ll>> a(n,vector<ll>(m));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++) cin>>a[i][j];
    }
    ll ans = 0;
    for(ll j=0;j<m;j++){
        ll tmp=0;
        vector<ll> tm;
        for(ll i=0;i<n;i++) tm.push_back(a[i][j]);
        sort(all(tm));
        for(ll i=0;i<n;i++){
            tmp += tm[i];
            ans += abs((tm[i]*(i+1))-tmp);
        }
    }
    out(ans)
}
love{
    Alamgir
    int t=1; 
    cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}