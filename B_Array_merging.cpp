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
    int n; cin >> n;
    vii a(n), b(n);
    set<int> st;
    for(int i = 0; i < n; i++) cin >> a[i], st.insert(a[i]);
    for(int i = 0; i < n; i++) cin >> b[i], st.insert(b[i]);

    map<int, int> mp;
    map<int,int> mp2;
    int cnt = 1;

    for(int i = 1; i < n; i++){
        if(a[i] == a[i - 1]) cnt++;
        else{
            mp[a[i - 1]] = max(mp[a[i - 1]], cnt);
            cnt = 1;
        }
    }
    mp[a[n - 1]] = max(mp[a[n - 1]], cnt);

    cnt = 1;
    for(int i = 1; i < n; i++){
        if(b[i] == b[i - 1]) cnt++;
        else{
            mp2[b[i - 1]] = max(mp2[b[i - 1]], cnt);
            cnt = 1;
        }
    }
    mp2[b[n - 1]] = max(mp2[b[n - 1]], cnt);

    ll ans = 1;
    while(!st.empty()){
        int x = *st.begin();
        st.erase(st.begin());
        ans = max(ans, (mp[x] + mp2[x])*1LL);
    }
    // for(auto it : mp){
    //     if(mp2.find(it.first) != mp2.end()){
    //         ans = max(ans, (it.second + mp2[it.first])*1LL);
    //     }
    // }
    // for(auto it : mp2){
    //     if(mp.find(it.first) != mp.end()){
    //         ans = max(ans, (it.second + mp[it.first])*1LL);
    //     }
    // }
    out(ans)

}

love{
    Alamgir
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    return 0;
}
