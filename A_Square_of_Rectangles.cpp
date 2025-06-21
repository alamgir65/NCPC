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
    int l1,b1,l2,b2,l3,b3; 
    cin>>l1>>b1>>l2>>b2>>l3>>b3;

    if((l1==l2 && l2==l3 && b1+b2+b3 == l1) || (b1==b2 && b2==b3 && l1+l2+l3 == b1)){
        yes
        return;
    }
    if(l1 > b1){
        if(l2+l3 == l1 && b2==b3 && l1==b1+b2){
            yes
            return;
        }
        else no
    }else{
        if(b2+b3 == b1 && l2==l3 && b1==l1+l2){
            yes
            return;
        }
        else no
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