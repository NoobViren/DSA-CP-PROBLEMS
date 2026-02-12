#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        long long ans = 0;
        long long  m = a[0];               // current segment max
        long long flag = a[0] > 0 ? 1 : 0; // 1 = positive, 0 = negative

        for (int i = 1; i < n; ++i) {
            if ((a[i] > 0) == flag) {
                // Same sign segment, take max
                m = max(m, a[i]);
            } else {
                // Sign changed, add previous segment max and reset
                ans += m;
                m = a[i];
                flag ^= 1; // flip the flag
            }
        }

        ans += m; // add last segment's max
        cout << ans << '\n';
    }
    return 0;
}
