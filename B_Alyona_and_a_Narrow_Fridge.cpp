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
bool possible(vector<ll> v,int n,ll h){
    sort(v.begin(),v.begin()+n);
    reverse(v.begin(),v.begin()+n);
    // for(auto x:v) cout<<x<<" ";
    // nl
    ll last=h;
    for(int i=0;i<n;i++){
        if(v[i]<=last){
            last -= v[i];
            if(i+1<n){
                i++;
            }
        }else{
            return false;
        }
    }
    return true;

}
void solve(){
    ll n,h; cin>>n>>h;
    vll a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    // possible(a,3,h);
    int l=1,r=n,mid,ans=-1;
    while(l<=r){
        mid = (l+r)/2;
        if(possible(a,mid,h)){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    out(ans)
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