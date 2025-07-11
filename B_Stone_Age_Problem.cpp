#include<bits/stdc++.h>
// #define ll long long
#define ll unsigned long long
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
    ll n,q; cin>>n>>q;
    ll sum=0;
    vll a(n);
    for(int i=0;i<n;i++) cin>>a[i],sum += a[i];
    bool flag=false;
    ll last=0;
    set<int> track;
    while(q--){
        ll type; cin>>type;
        if(type == 1){
            ll i,x; cin>>i>>x;
            if(!flag){
                sum -= a[i-1];
                sum += x;
                a[i-1] = x;
            }else{
                if(track.find(i-1) != track.end()){
                    sum -= a[i-1];
                    sum += x;
                    a[i-1] = x;
                }else{
                    sum -= last;
                    sum += x;
                    a[i-1] = x;
                    track.insert(i-1);
                }
            }
            out(sum)

        }else{
            track.clear();
            ll x; cin>>x;
            flag=true;
            last = x;
            sum = (n*x);
            out(sum)
        }
    }
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