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
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}
void solve(){
    int n; cin>>n;
    vii a(n); 
    for(int i=0;i<n;i++) cin>>a[i];
    vll prefix(n);
    prefix[0]=a[0];
    for(int i=1;i<n;i++) prefix[i]=prefix[i-1]+a[i];
    ll ans=0;
    for(int i=0;i<n-1;i++){
        ll x=prefix[i],y=prefix[n-1]-prefix[i];
        ans=max(ans,gcd(x,y));
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