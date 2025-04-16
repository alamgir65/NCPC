#include <bits/stdc++.h>
#define ll long long
using namespace std;

int position(vector<pair<ll,int>> v){
    int cnt = 0;
    sort(v.rbegin(), v.rend()); // directly sort in descending order
    for(auto u : v){
        if(u.second != 1) cnt++;
        else return cnt;
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); // for fast input-output

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n][n];
        vector<pair<ll,int>> v;
        int l = INT_MAX, r = INT_MIN;

        for(int i = 0; i < n; i++){
            ll tmp = 0;
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
                l = min(a[i][j], l);
                r = max(a[i][j], r);
                tmp += a[i][j];
            }
            v.push_back({tmp, i+1});
        }

        int x = position(v);
        int ans = -1;

        while(l <= r){
            int mid = (l + r) / 2; // ✅ fixed this line
            vector<pair<ll,int>> v2;

            for(int i = 0; i < n; i++){
                ll tmp = 0;
                for(int j = 0; j < n; j++){
                    tmp += min(a[i][j], mid);
                }
                v2.push_back({tmp, i+1});
            }

            int pos = position(v2);

            if(pos >= x){
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
