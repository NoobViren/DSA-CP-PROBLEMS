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
        vector<int> a(n);
        for (int &x : a) cin >> x;

        vector<vector<int>> dp(2, vector<int>(n + 2, 0));

        for (int i = n - 1; i >= 0; i--) {
            
            if (i + 1 < n && a[i] == 1 && a[i + 1] == 1) {
                dp[0][i] = min(
                    1 + dp[1][i + 1],
                    2 + dp[1][i + 2]
                );
            }
            else if (a[i] == 1) {
                dp[0][i] = min(
                    1 + dp[1][i + 1],
                    1 + dp[1][i + 2]
                );
            }
            else if (i + 1 < n && a[i + 1] == 1) {
                dp[0][i] = min(
                    dp[1][i + 1],
                    1 + dp[1][i + 2]
                );
            }
            else {
                dp[0][i] = min(
                    dp[1][i + 1],
                    dp[1][i + 2]
                );
            }

            // my turn (1)
            dp[1][i] = min(dp[0][i + 1], dp[0][i + 2]);
        }

        cout << dp[0][0] << '\n';
    }
}
