#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(auto &x : a) cin>>x;
    vector<vector<int>>dp(n+1,vector<int>(k+1));
    dp[0][0] = 1;
    
    for(int i = 1;i<=n;i++){
        int pref = 0;
        for(int j = 0;j<=k;j++){
            pref  = (pref +  dp[i-1][j])%mod;
            if(j-a[i-1]-1>=0){
                pref = (pref - dp[i-1][j-a[i-1]-1] + mod)%mod;
            }
            dp[i][j] = pref;
            // for(int x = 0;x<=a[i];x++){
            //     dp[i][j] += dp[i-1][j-x];
            // }
        }
    }
    cout<<dp[n][k]<<'\n';
}