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
    ll n,x; cin>>n>>x;
    vll a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(all(a));
    int j=-1;
    for(ll i=1;i<n;i++){
        a[i] += a[i-1];
        if(a[i] > x){
            j=i-1;
            break;
        }
        j=i;
    }
    ll ans = 0;
    int number,times;
    ll day = 1;
    while(j>=0){
        if(a[j]+day-1 > x){
            j--;
            continue;
        }
        ll d = x-a[j];
        number = (j+1)*(day);
        times = d/number;
        ans += (j+1)+((j+1)*times);
        j--;
        day++;
    }
    out(ans)
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