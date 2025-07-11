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
    string s; cin>>s;
    for(int i=1;i<s.size();i++){
        if(s[i-1] == s[i]){
            if(i+1<s.size()){
                int x = s[i]-'a';
                if(s[i]==s[i+1]){
                    x++;
                    x %= 26;
                    s[i] = 'a'+x;
                }else{
                    x++;
                    x %= 26;
                    int y=s[i+1]-'a';
                    if(x==y){
                        x++;
                        x %= 26;
                        s[i]='a'+x;
                    }else{
                        s[i] = 'a'+x;
                    }
                }
            }else{
                int x = s[i]-'a';
                x++;
                x %= 26;
                s[i] = 'a'+x;
            }
        }
    }
    out(s)
}
love{
    Alamgir
    int t=1; 
    // cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}