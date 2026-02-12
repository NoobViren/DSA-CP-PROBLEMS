#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
    int n;
    long long k;
    cin >> n >> k;
    vector<int>a(n);
    for(auto &x : a) cin>>x;
    vector<vector<int>>dp(n+1,vector<int>(k+1,0));
    dp[0][0] = 0;
    //dp[i][j] = min value till i with j ops ...a segment of length l takes l-1 ops...
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            int currmin = INT_MAX;
            for(int d = 0;j+d<=k && i + d<=n ; d++){
                currmin = min(currmin,a[i+d]);
                dp[i+d+1][j+d] = min(dp[i+d+1][j+d],dp[i][j] + d*currmin);
            }
        }
    }
    cout<<dp[n][k]<<'\n';
    
  }
}
