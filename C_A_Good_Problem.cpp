#include <bits/stdc++.h>
using namespace std;
#define int long long

bool check(const vector<int>& a) {
    int _and = a[0], _xor = a[0];
    for (int i = 1; i < a.size(); i++) {
        _and &= a[i];
        _xor ^= a[i];
    }
    return _and == _xor;
}

void solve() {
    int n, l, r, k;
    cin >> n >> l >> r >> k;

    // Try repeating x n times
    for (int x = l; x <= min(r, l + 100); x++) {
        int _and = x;
        int _xor = (n % 2 == 0) ? 0 : x;
        if (_and == _xor) {
            cout << x << '\n';
            return;
        }
    }

    // Try brute force for small n and small range
    if (n <= 8 && r - l + 1 <= 8) {
        vector<int> a(n);
        vector<int> best;
        function<void(int)> dfs = [&](int i) {
            if (i == n) {
                if (check(a)) {
                    if (best.empty() || a < best) best = a;
                }
                return;
            }
            for (int val = l; val <= r; val++) {
                a[i] = val;
                dfs(i + 1);
            }
        };
        dfs(0);
        if (!best.empty()) cout << best[k - 1] << '\n';
        else cout << -1 << '\n';
        return;
    }

    // Fallback: no solution found
    cout << -1 << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
