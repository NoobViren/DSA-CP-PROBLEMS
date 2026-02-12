#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&h,vector<int>&s,int i,int x,vector<vector<int>>&dp){
    
    if(i<0) return 0;
    if(dp[i][x] !=-1) return dp[i][x];
    int skip = solve(h,s,i-1,x,dp);
    int take = 0;
    if(x>=h[i]){
        take = s[i] + solve(h,s,i-1,x-h[i],dp);
    }
    return dp[i][x] = max(take,skip);
}
int main(){

    int n,x;
    cin>>n>>x;
    vector<int>h(n),s(n);
    for(auto &x : h) cin>>x;
    for(auto &x : s) cin>>x;
    vector<vector<int>>dp(n+1,vector<int>(x+1,-1));
   cout<<solve(h,s,n-1,x,dp);
    
    
}