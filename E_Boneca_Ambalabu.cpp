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
    int n; cin>>n;
    vii a(n);
    vii cnt(31,0);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        for(int j=0;j<30;j++){
            cnt[j] += ((a[i]>>j)&1);
        }
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        ll x=0;
        for(int j=0;j<30;j++){
            bool bit = ((a[i]>>j)&1);
            if(bit){
                x += (1LL << j) * (n-cnt[j]);
            }else x += (1LL << j) * cnt[j];
        }
        ans = max(ans,x);
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