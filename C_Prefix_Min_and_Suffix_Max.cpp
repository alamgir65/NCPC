#include <bits/stdc++.h>
using namespace std;
void testCase() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int &i : a) cin >> i;
  string ans = string(n, '0');
  int mn = 1e9 + 5, mx = 0;
  for (int i = 0; i < n; i++) {
    mn = min(mn, a[i]);
    if (mn == a[i]) ans[i] = '1';
  }
  for (int i = n - 1; i >= 0; i--) {
    mx = max(mx, a[i]);
    if (mx == a[i]) ans[i] = '1';
  }
  cout << ans << "\n";
  ///
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tc;
  cin >> tc;
  while (tc--) {
    testCase();
  }
}