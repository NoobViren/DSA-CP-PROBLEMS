#include<bits/stdc++.h>
using namespace std;
#define int long long
int dp[3][100001];
int solve(vector<int>&a,int i,int sum){
    if(i == a.size()){
        if(sum == 1) return 0;
        return INT_MIN;
    }
    if(dp[sum][i]!=-1) return dp[sum][i];
    int skip = solve(a,i+1,sum);
    int take = a[i] + solve(a,i+1,((sum+a[i])%2+2)%2);
    return dp[sum][i] = max(skip,take);
    
}
signed main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &x : a ) cin>>x;
    // memset(dp,-1,sizeof(dp));
    // int ans = solve(a,0,0);
    
    // cout<<ans<<'\n';
    
    vector<vector<int>>dp(n+1,vector<int>(2,0));
    dp[n][1] = 0;
    dp[n][0] = INT_MIN;
    for(int i = n-1;i>=0;i--){
       for(int j = 0;j<=1;j++){
        
          int skip = dp[i+1][j];
          int sum = ((j+a[i])%2+2)%2;
          int take = 0;
          if(dp[i+1][sum]!=INT_MIN){
            take = a[i] + dp[i+1][sum];
          }
          dp[i][j] = max(skip,take);
        }
       
    }
    cout<<dp[0][0]<<" ";
    
}