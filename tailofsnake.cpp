#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
vector<int>a,b,c;

// int dp[300001][4];
// int solve(int i,int x){
//     if(i == n) return 0;
//     if(x == 3){
//         return p3[n-1] - p3[i];
//     }
//     if(dp[i][x]!=-1) return dp[i][x];
//     int ans = 0;
//     if(x == 1){
//         for(int j = i;j<n-1;j++){
//             ans = max(ans,p1[j] + solve(j,2));
//         }
//     }
//     else if(x == 2){
//         for(int j = i+1;j<n-1;j++){
//             ans = max(ans,p2[j]-p2[i] + solve(j,3));
//         }
//     }
//     return dp[i][x] = ans;
// }
signed main(){
    
    cin>>n;
    a.resize(n);
    b.resize(n);
    c.resize(n);
   
   
    
    for(auto &x : a) cin>>x;
    for(auto &y : b) cin>>y;
    for(auto &z : c) cin>>z;
   
   const int NEG = -1e9;
   vector<vector<int>> dp(n+1, vector<int>(4, NEG));
    dp[0][0] = 0;
    
   for(int i = 0;i<n;i++){
      dp[i+1][0] = max(dp[i+1][0],dp[i][0]);

      dp[i+1][1] = max(dp[i+1][1],dp[i][0] + a[i]);
      dp[i+1][1] = max(dp[i+1][1],dp[i][1] + a[i]);

      dp[i+1][2] = max(dp[i+1][2],dp[i][1] + b[i]);
      dp[i+1][2] = max(dp[i+1][2],dp[i][2] + b[i]);

      dp[i+1][3] = max(dp[i+1][3],dp[i][2] + c[i]);
      dp[i+1][3] = max(dp[i+1][3],dp[i][3] + c[i]);
   }

        
    cout<<dp[n][3]<<'\n';

    
}