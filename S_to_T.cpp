#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    string s,t; cin>>s>>t;
	    vector<int> v;
	    bool flag=true;
	    for(int i=n-1;i>=0;i--){
	        if(s[i]!=t[i]){
	            if(i-1>=0 && s[i-1]=='1'){
	                v.push_back(i);  // i-1 push korchi
	            }else{
	                int j=i-1;
	                while(j>=0 && s[j]=='0'){
	                    j--;
	                }

	                if(j==i-1 || j<0){
	                    flag=false;
	                    break;
	                }
	                else{
	                    // s[i]=t[i];
	                    for(int k=j;k<=i-1;k++){
                            s[k]='1';
	                        v.push_back(k+1);
	                    }
	                    // for(int k=i-2;k>=j;k--){
	                    //     v.push_back(k+1);
	                    // }
	                }
	            }
	        }
	    }
	    if(!flag || v.size()>3*n){
	        cout<<-1<<endl;
	    }else{
	        cout<<v.size()<<endl;
	        for(auto x:v) cout<<x<<" ";
	        cout<<endl;
	    }
	}

}
