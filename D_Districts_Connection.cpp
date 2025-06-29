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
    map<int,vector<int>> mp;
    for(int i=0;i<n;i++) mp[a[i]].pb(i+1);
    if(mp.size() == 1){
        no
        return;
    }
    yes
    int track = mp.begin()->first;
    for(auto it: mp){
        if(it.first != track){
            for(auto x:it.second){
                cout << mp.begin()->second[0] << " " << x << endl;
            }
        }
    }
    int track2 = mp.rbegin()->second[0];
    int cnt = 0;
    for(auto x: mp.begin()->second){
        cnt++;
        if(cnt == 1) continue; // Skip the first element
        cout << track2 << " " << x << endl;
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