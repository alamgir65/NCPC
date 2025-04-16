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
    string p,s; cin>>p>>s;
    int m=s.size(),n=p.size();
    int L=0,R=0;
    vector<pair<char,int>> v1,v2;
    for(int i=0;i<n;i++){
        if(p[i]=='L'){
            if(R>0){
                v1.pb({'R',R});
                R=0;
            }
            L++;
        }
        else{
            R++;
            if(L>0){
                v1.pb({'L',L});
                L=0;
            }
        }
    }
    if(L>0) v1.pb({'L',L});
    if(R>0) v1.pb({'R',R});

    L=0,R=0;

    for(int i=0;i<m;i++){
        if(s[i]=='L'){
            if(R>0){
                v2.pb({'R',R});
                R=0;
            }
            L++;
        }
        else{
            R++;
            if(L>0){
                v2.pb({'L',L});
                L=0;
            }
        }
    }
    if(L>0) v2.pb({'L',L});
    if(R>0) v2.pb({'R',R});


    // for(auto u:v1){
    //     cout<<"{"<<u.first<<","<<u.second<<"} ";
    // }
    // nl
    // for(auto u:v2){
    //     cout<<"{"<<u.first<<","<<u.second<<"} ";
    // }

    bool ans=true;
    if(v1.size()!=v2.size()){
        ans=false;
    }
    else{
        for(int i=0;i<v1.size();i++){
            if(v1[i].first!=v2[i].first || (2*v1[i].second < v2[i].second ||  v2[i].second < v1[i].second)){
                ans=false;
                break;
            }
        }
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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