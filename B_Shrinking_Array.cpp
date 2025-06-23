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
bool check_beautiful(vii &a,int n){
    for(int i=0;i<n-1;i++){
        if(abs(a[i]-a[i+1]) <= 1) return true;
    }
    return false;
}
void solve(){
    int n; cin>>n;
    vii a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    int ans=imax;

    for(int i=0;i<n;i++){
        int mx=imin,mn=imax;
        for(int j=i+1;j<n;j++){
            mx=max(mx,a[j]);
            mn=min(mn,a[j]);
            if((a[i] <= mx && a[i] >= a[j]) || (a[i] >= mn && a[i] <= a[j])){
                int distance = j-i;
                ans = min(ans, distance-1);
            }
            else if((a[i]+1 <= mx && a[i]+1 >= a[j]) || (a[i]+1 >= mn && a[i]+1 <= a[j])){
                int distance = j-i;
                // cout << mn << " " << mx << " " << a[i] << " " << a[j] << endl;
                // cout << distance << " " << i << " " << j << endl;
                ans = min(ans, distance-1);
            }
            else if((a[i]-1 <= mx && a[i]-1 >= a[j]) || (a[i]-1 >= mn && a[i]-1 <= a[j])){
                int distance = j-i;
                // cout << mn << " " << mx << " " << a[i] << " " << a[j] << endl;
                // cout << distance << " " << i << " " << j << endl;
                ans = min(ans, distance-1);
            }
        }

    }

    if(ans == imax) out(-1)
    else out(ans)
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