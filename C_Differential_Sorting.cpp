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
bool check(vector<ll> v){
    for(int i=0;i<v.size()-1;i++){
        if(v[i]>v[i+1]) return false;
    }
    return true;
}
void solve(){
    ll n; cin>>n;
    vll a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    if(check(a)){
        out(0)
        return;
    }
    if(a[n-1]<a[n-2]){
        out(-1)
        return;
    }
    ll mx=a[n-1],mn=a[n-2];
    for(ll i=n-2;i>=0;i--){
        if(a[i]>mn && (mn-mx)>mn){
            out(-1)
            return;
        }
        mn=min(a[i],mn);
        mx=max(a[i],mx);
    }
    out(n-2)
    for(int i=1;i<=n-2;i++){
        cout<<i<<" "<<n-1<<" "<<n<<endl;
    }
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