#include<bits/stdc++.h>
#define ll long long
#define love int main()
using namespace std;
void solve(){
    int n; cin>>n;
    set<int> st;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        st.insert(x);
    }
    cout<<st.size()<<endl;
}
love{
    int t=1; 
    cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}