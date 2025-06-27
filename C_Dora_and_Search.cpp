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
    for(int i=0;i<n;i++) cin>>a[i];
    vector<pii> v(n);
    vector<pii> rev(n);
    int mn=imax,mx=imin;
    
    for(int k=0;k<n;k++){
        mn=min(a[k],mn);
        mx=max(mx,a[k]);
        v[k]={mn,mx};
    }
    mn=imax,mx=imin;
    for(int k=n-1;k>=0;k--){
        mn=min(a[k],mn);
        mx=max(mx,a[k]);
        rev[k]={mn,mx};
    }

    int i=0,j=0;
    while(j<n){
        if(a[j]==v[j].first || a[j]==v[j].second || a[j]==rev[j].first || a[j]==rev[j].second){
            
        }
        if(a[i]!=mn && a[i]!=mx && a[j]!=mn && a[j]!=mx){
            break;
        }
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