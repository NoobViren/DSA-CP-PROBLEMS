#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e7;
vector<bool> isPrime(MAX_N + 1, true);
vector<int> primeCount(MAX_N + 1, 0);

void precomputeSieve() {
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime

    for (int i = 2; i * i <= MAX_N; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX_N; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Compute prefix sum for prime count
    for (int i = 1; i <= MAX_N; i++) {
        primeCount[i] = primeCount[i - 1] + (isPrime[i] ? 1 : 0);
    }
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long sum = 0;
        for (int i = 1; i <= n / 2; i++) {
            sum += primeCount[n / i];
        }

        cout << sum << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    precomputeSieve();
    solve();

    return 0;
}