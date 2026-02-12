#include <bits/stdc++.h>
using namespace std;

bool existsX(int n) {
    if (n == 0) return true;

    string b = "";
    while (n > 0) {
        b += char('0' + (n % 2));
        n /= 2;
    }
    reverse(b.begin(), b.end());

    // count trailing zeros
    int t = 0;
    for (int i = b.size() - 1; i >= 0 && b[i] == '0'; --i)
        t++;

    string padded = string(t, '0') + b;
    string rev = padded;
    reverse(rev.begin(), rev.end());

    if (padded != rev) return false; // must be palindrome

    int L = padded.size();
    if (L % 2 == 1 && padded[L / 2] == '1') return false; // middle bit restriction

    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << (existsX(n) ? "YES\n" : "NO\n");
    }
}
