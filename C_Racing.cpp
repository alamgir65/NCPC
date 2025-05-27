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
    vector<pii> v;
    for(int i=0;i<n;i++){
        int x,y; cin>>x>>y;
        v.pb({x,y});
    }

    bool flag = true;
    int value = 0;

    vii track;
    for(int i=0;i<n;i++){

        if(a[i] == -1) track.pb(i);
        else value += a[i];

        while(value < v[i].first){
            if(track.empty()){
                out(-1)
                return;
            }
            a[track.back()] = 1;
            value++;
            track.pop_back();
        }

        while(value+track.size() > v[i].second){
            if(track.empty()){
                out(-1)
                return;
            }
            a[track.back()] = 0;
            track.pop_back();
        }
    }
    for(int i=0;i<n;i++){
        cout<<max(a[i],0)<<" ";
    }
    nl
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