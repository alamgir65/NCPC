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
    int n,m; cin>>n>>m;
    vector<vector<int>> a(n, vector<int>(m));
    int mx=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            mx = max(mx, a[i][j]);
        }
    }
    set<int> rowSet, colSet;
    vector<pii> vp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] == mx){
                vp.pb({i,j});
            }
        }
    }
    int row = vp[0].first, col = vp[0].second;
    for(int i=0;i<vp.size();i++){
        if(row != vp[i].first) colSet.insert(vp[i].second);
        if(col != vp[i].second) rowSet.insert(vp[i].first);
    }
    
    if(rowSet.size() <= 1 || colSet.size() <= 1) out(mx-1)
    else out(mx)
    
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