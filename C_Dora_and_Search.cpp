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
    
    int i=0,j=n-1;
    int left=1,right=n;
    bool ok=true;
    while(ok && i<j){
        ok=0;
        if(a[i]==left || a[i]==right){
            if(a[i]==left) left++;
            else right--;
            i++;
            ok=1;
        }
        if(a[j]==left || a[j]==right){
            if(a[j]==left) left++;
            else right--;
            j--;
            ok=1;
        }
    }
    if(j>i) out2(i+1,j+1)
    else out(-1)
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