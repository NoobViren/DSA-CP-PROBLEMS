#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // precompute odd squares up to 2*1e9 (safe bound)
    long long M = 2e9;
    long long k = sqrt(M);
    vector<long long> oddsq;
    for (long long i = 1; i <= k; i += 2) {
        oddsq.push_back(i*i);  // all odd squares
    }

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long limit = 2*n - 1;

        // count how many odd squares ≤ 2n-1
        long long idx = upper_bound(oddsq.begin(), oddsq.end(), limit) - oddsq.begin();
        // subtract 1 if a=1 because that gives (1,0,1), invalid
        if (idx > 0 && oddsq[0] == 1) idx--;

        cout << idx << "\n";
    }
}
