#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int iterations = 0;
        while (true) {
            iterations++;
            bool decreased = false;
            for (int i = 0; i < n; i++) {
                if (a[i] > b[i]) {
                    a[i]--;
                    decreased = true;
                    break;
                }
            }
            if (!decreased) break;
            for (int i = 0; i < n; i++) {
                if (a[i] < b[i]) {
                    a[i]++;
                    break;
                }
            }
        }

        cout << iterations << "\n";
    }

    return 0;
}
