#include <bits/stdc++.h>
using namespace std;

long long dp[3000][3000];
int mod = 1e9+7;
long long solve(long long i, long long k,long long n) {
    
    if (i<=0 || k<=0) return 0;       
    if (k == 1) return 1;      
    if (dp[i][k] != -1) return dp[i][k];

    long long ans = 0;
    for (long long j = i; j <=n; j+=i) {
        
            ans += solve(j, k - 1,n)%mod;
    }
    return dp[i][k] = ans%mod;
}

int main() {
    

    
    memset(dp, -1, sizeof(dp));
    
        long long n, k;
        cin >> n >> k;
       

        long long ans = 0;
        for (long long i = 1; i <=n; i++) {
            ans += solve(i, k,n)%mod;
        }
        cout << ans << "\n";
    }

