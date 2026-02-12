#include<bits/stdc++.h>
using namespace std;
#define int long long

const int MOD = 998244353;

signed main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<vector<int>> adj(n+1);
        for(int i = 2; i <= n; i++){
            int k;
            cin >> k;
            adj[k].push_back(i);
        }

        vector<int> total(n+1, 0), dp(n+1, 0);

        dp[1] = 1;
        total[0] = 1;

        int level = 1;
        queue<int> q;

        for(auto i : adj[1]){
            dp[i] = 1;
            total[level] = (total[level] + dp[i]) % MOD;
            q.push(i);
        }

        level++;

        while(!q.empty()){
            int sz = q.size();
            total[level] = 0;

            for(int i = 0; i < sz; i++){
                int node = q.front();
                q.pop();

                for(auto u : adj[node]){
                    dp[u] = (total[level-1] - dp[node] + MOD) % MOD;
                    total[level] = (total[level] + dp[u]) % MOD;
                    q.push(u);
                }
            }
            level++;
        }

        int sum = 0;
        for(int i = 1; i <= n; i++){
            sum = (sum + dp[i]) % MOD;
        }

        cout << sum << '\n';
    }
}
