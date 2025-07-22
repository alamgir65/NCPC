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
    vii a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    set<int> store;
    for(auto x:a){
        if(x > a[k-1]) store.insert(x);
    }
    bool isPossible = true;
    int last = a[k-1],water = 0,distance;
    for(auto x:store){
        distance = x-last;
        if(water + distance > last){
            isPossible = false;
            break;
        }
        water += min(distance, last-water);
        last = x;
    }
    (isPossible) ? cout<<"YES\n" : cout<<"NO\n";
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