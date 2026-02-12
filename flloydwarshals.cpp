#include<bits/stdc++.h>
using namespace std;
int main(){
    //dp[i][j] = min cost to go from i to j with k as an intermediate where 
    vector<vector<int>>dp(n+1);
    for(int k = 1;k<=n;k++){
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=n;j++){
                dp[i][j] = min(dp[i][j],dp[i][k] + dp[k][j]);
            }
        }
    }
}