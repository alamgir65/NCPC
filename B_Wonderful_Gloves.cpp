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
    int n,k; cin >>n>>k;
    vii l(n),r(n);
    ll sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        cin>>l[i];
        sum1 += l[i];
    }
    for(int i=0;i<n;i++){
        cin>>r[i];
        sum2 += r[i];
    }
    int ans=max(sum1,sum2);
    if(sum1>=sum2){
        for(int i=0;i<n;i++){
            ans += max(0,r[i]-l[i]);
        }
    }else{
        for(int i=0;i<n;i++){
            ans += max(0,l[i]-r[i]);
        }
    }
    out(ans+k)
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