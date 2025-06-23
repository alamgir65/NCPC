#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int &x : a) cin >> x;

        // Alice wins only if sum of 3 red elements > max element in the array
        // Since array is sorted: a[n-1] is the max element
        int max_val = a[n - 1];

        // We find the number of triplets (i, j, k) with i < j < k and a[i] + a[j] + a[k] > max_val

        int ans = 0;

        // Use 3 nested loops with optimizations based on the problem constraint sum(n) <= 5000
        for (int i = 0; i < n - 2; ++i) {
            for (int j = i + 1; j < n - 1; ++j) {
                int required = max_val - a[i] - a[j] + 1;  // need a[k] > required - 1
                // Find the first index k such that a[k] >= required and k > j
                int k = lower_bound(a.begin() + j + 1, a.end(), required) - a.begin();
                if (k < n) {
                    ans += n - k;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
