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
    int n,k; cin>>n>>k;
    vii a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    bool flag=true,ok=true;
    int mn=imax,mx=imin;
    int track = -1;
    for(int i=0;i<n;i++){
        if(b[i] != -1){
            if(track == -1){
                track = a[i]+b[i];
            }
            else if(track != a[i]+b[i]){
                flag = false;
                break;
            }
        }else{
            mn = min(mn,a[i]);
            mx = max(mx,a[i]);
            ok=false;
        }
    }
    if(!flag) out(0)
    else{
        if(track == -1){
            out(mn+k-mx+1)
        }else{
           if((track > mn+k || track < mx) && !ok){
                out(0)
            }else{
                out(1)
            }
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