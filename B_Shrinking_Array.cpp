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
    int ans = imax;

    for(int i=0;i<n;i++){
        int mx=imin,mn=imax;
        for(int j=i+1;j<n;j++){
            mx = max(mx, a[j]);
            mn = min(mn, a[j]);
            if(mx+1 >= a[i] && mn-1 <= a[i]){
                ans = min(ans, j-i-1);
            }
        }
        mx=imin, mn=imax;
        for(int j=i-1;j>=0;j--){
            mx = max(mx, a[j]);
            mn = min(mn, a[j]);
            if(mx+1 >= a[i] && mn-1 <= a[i]){
                ans = min(ans, i-j-1);
            }
        }
    }
    if(ans == imax) out(-1)
    else out(ans);
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