#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> v(n);
        for (auto &x : v) cin >> x;

        long long gcd1 = 0, gcd2 = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) gcd1 = gcd(gcd1, v[i]);
            else gcd2 = gcd(gcd2, v[i]);
        }
//no need to compare the gcds just check independently 
        bool valid1 = true, valid2 = true;
        for (int i = 1; i < n; i += 2)
            if (v[i] % gcd1 == 0) valid1 = false;
        for (int i = 0; i < n; i += 2)
            if (v[i] % gcd2 == 0) valid2 = false;

        if (valid1) cout << gcd1 << endl;
        else if (valid2) cout << gcd2 << endl;
        else cout << 0 << endl;
    }
}
