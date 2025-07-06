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
    ll n,k,x; cin>>n>>k>>x;
    vll a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(all(a));

    vll diff;
    for(int i=0;i<n-1;i++){
        if(a[i+1]-a[i] > x) diff.pb(a[i+1]-a[i]);
    }
    sort(all(diff));
    ll cnt=0;
    for(int i=0;i<diff.size();i++){
        if((diff[i]-1)/x  <= k){
            k -= (diff[i]-1)/x;
            cnt++;
        }
    }
    cout << diff.size()-cnt+1 << endl;
}
love{
    Alamgir
    int t=1; 
    // cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}