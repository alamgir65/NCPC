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
constexpr int mod = 1e9 + 7, inf = INT_MAX;
void solve(){
    int n,m; cin>>n>>m;
    vii a(n),b(m),forward(m),backward(m);
    int ans = inf;

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    int j=0;
    for(int i=0;i<m;i++){
        while(j<n && a[j] < b[i]) j++;
        forward[i] = j++;
    }

    j=n-1;

    for(int i=m-1;i>=0;i--){
        while(j>=0 && a[j] < b[i]) j--;
        backward[i] = j--;
    }

    if(n == 1){
        (a[0] >= b[0]) ? cout<<0<<endl : cout<<b[0]<<endl;
    }else if(forward.back() < n) out(0)
    else{
        if(forward[m-2] < n) ans = min(ans,b[m-1]);
        if(backward[1] >= 0) ans = min(ans, b[0]);

        for(int i=1;i<m-1;i++){
            if(forward[i-1] < backward[i+1]){
                ans = min(ans, b[i]);
            }
        }
        if(ans == inf) out(-1)
        else out(ans)
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