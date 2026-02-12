#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &x : a) cin >> x;

        int pos = max_element(a.begin(), a.end()) - a.begin(); 
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (abs(i - pos) > a[pos] - a[i]) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
