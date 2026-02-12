#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &x : a) cin >> x;

        // base sum of even indices
        int base = 0;
        for (int i = 0; i < n; i += 2)
            base += a[i];

        // even-start reversal
        int best0 = 0, cur0 = 0;
        for (int i = 0; i + 1 < n; i += 2) {
            cur0 += a[i + 1] - a[i];
            best0 = max(best0, cur0);
            if (cur0 < 0) cur0 = 0;
        }

        // odd-start reversal
        int best1 = 0, cur1 = 0;
        for (int i = 1; i + 1 < n; i += 2) {
            cur1 += a[i] - a[i + 1];
            best1 = max(best1, cur1);
            if (cur1 < 0) cur1 = 0;
        }

        int best = max(best0, best1);
        cout << base + best << '\n';
    }
}
