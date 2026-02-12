#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        if (k >= 3) {
            cout << 0 << '\n';
        }
        else if (k == 1) {
            long long m = LLONG_MAX;
            for (long long i = 1; i < n; i++) {
                m = min(m, a[i] - a[i - 1]);
            }
            cout << m << '\n';
        }
        else if (k == 2) {
            vector<long long> temp;
            for (long long i = 0; i < n; i++) {
                for (long long j = i; j < n; j++) {
                    temp.push_back(a[j] - a[i]);
                }
            }
            
            long long m = LLONG_MAX;
            for (auto val : temp) {
                long long ub = upper_bound(a.begin(), a.end(), val) - a.begin();
                long long lb = lower_bound(a.begin(), a.end(), val) - a.begin();

                if (ub < n) m = min(m, abs(val - a[ub]));
                if (lb < n) m = min(m, abs(val - a[lb]));
            }
            
            cout << m << '\n';
        }
    }
}
