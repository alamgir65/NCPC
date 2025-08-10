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
    map<int,int> mp,mp2;
    for(int i=0;i<n;i++) cin>>a[i],mp[a[i]]++;
    for(int i=0;i<n;i++) cin>>b[i],mp2[b[i]]++;

    vii tmp;
    for(int i=0;i<n;i++){
        if(mp[a[i]] > mp2[a[i]]){
            for(int j=0;j<(mp[a[i]]-mp2[a[i]]);j++) tmp.pb(a[i]);
        }
    }

    for(auto x:tmp){
        if(mp2.find(k+x) != mp2.end()){
            mp[x]--;
            if(mp[x]==0) mp.erase(x);
            mp[k+x]++;
        }else if(mp2.find(abs(k-x)) != mp2.end()){
            mp[x]--;
            if(mp[x]==0) mp.erase(x);
            mp[abs(k-x)]++;
        }
    }

    // for(int i=0;i<n;i++){
    //     if(mp[a[i]] > mp2[a[i]]){
    //         int dis = mp[a[i]]-mp2[a[i]];
    //         if(mp2[k+a[i]] > mp[k+a[i]]){
    //             mp[k+a[i]] += min(mp2[k+a[i]] - mp[k+a[i]],dis);
    //             dis -= min(mp2[k+a[i]] - mp[k+a[i]],dis);
    //         }
    //         if(mp2[abs(k-a[i])] > mp[abs(k-a[i])]){
    //             mp[abs(k-a[i])] += min(mp2[abs(k-a[i])] - mp[abs(k-a[i])],dis);
    //             dis -= min(mp2[abs(k-a[i])] - mp[abs(k-a[i])],dis);
    //         }

    //     }
    // }

    bool ok=1;
    for(int i=0;i<n;i++){
        // if(mp[a[i]]==0){
        //     mp.erase(a[i]);
        // }
        // if(mp2[a[i]]==0){
        //     mp2.erase(a[i]);
        // }
        if(mp[a[i]] != mp2[a[i]]) ok=0;
    }

    // if(mp.size() != mp2.size()) ok=0;
    if(ok) yes
    else no
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