#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Ala ios::sync_with_stdio(false), cin.tie(nullptr);

void solve() {
    int n, k, a, b; cin >> n >> k >> a >> b;
    vector<pair<ll,ll>> v(n);
    for (auto &p : v) cin >> p.first >> p.second;

    ll direct = llabs(v[a-1].first - v[b-1].first)
              + llabs(v[a-1].second - v[b-1].second);

    if (k == 0) { cout << direct << '\n'; return; }

    ll min_x = LLONG_MAX, min_y = LLONG_MAX;
    for (int i = 0; i < k; ++i) {
        min_x = min(min_x,
            llabs(v[i].first - v[a-1].first) + llabs(v[i].second - v[a-1].second));
        min_y = min(min_y,
            llabs(v[i].first - v[b-1].first) + llabs(v[i].second - v[b-1].second));
    }
    cout << min(direct, min_x + min_y) << '\n';
}

int main() {
    Ala
    int T; cin >> T;
    while (T--) solve();
    return 0;
}
