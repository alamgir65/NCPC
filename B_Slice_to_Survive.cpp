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
    int ans = 0;
    int n,m,a,b; cin>>n>>m>>a>>b;
    bool flag = true;
    while(true){
        if(n == 1 && m== 1){
            break;
        }
        if(flag){
            if(n <= m){
                m = min(b , m-b+1);
                if(b > m-b+1){
                    b=1;
                }
            }
            else{
                n = min(a, n-a+1);
                if(a > n-a+1){
                    a=1;
                }
            }
            flag = false;
        }else{
            if(n <= m){
                m = max(b , m-b+1);
                if(b < m-b+1){
                    b=1;
                }
            }
            else{
                n = max(a, n-a+1);
                if(a < n-a+1){
                    a=1;
                }
            }
            flag = true;
        }
        ans++;
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

// kuch nehi