#include<bits/stdc++.h>
using namespace std;
int solve(int n,int a,int b,int c,vector<int>&dp){
    if(n<0) return INT_MIN;
    if(n==0){
        return 0;
    }
    if(dp[n]!=-1) return dp[n];
    int c1=0,c2=0,c3=0;
   
       c1 =   1+solve(n-a,a,b,c,dp);
    
    
        c2 =  1+solve(n-b,a,b,c,dp);
    
    
        c3 =  1+solve(n-c,a,b,c,dp);
    
  return dp[n] = max({c1,c2,c3});
}
int main(){
    
  
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        vector<int>dp(n+1,-1);
       int ans = solve(n,a,b,c,dp);
       cout<<ans<<'\n';
    
}