#include<bits/stdc++.h>
using namespace std;

long long mod = 1e9+7;
long long solve(long long k,long long i,long long n,vector<vector<int>>&dp){
   if(k<0 || i>n) return 0; //always write the base cases carefully
   if(k==0) return 1;
   if(dp[k][i]!=-1) return dp[k][i];
   long long skip = solve(k,i+1,n,dp);
   long long take = solve(k-i,i+1,n,dp);
   return dp[k][i] = (skip + take)%mod;
}
int main(){
    
        long long n;
        cin>>n;
        
        long long sum = (n*(n+1))/2;
        
        if(sum%2!=0){
            cout<<0<<'\n';
        }
        else{
        long long k = sum/2;
        vector<vector<int>>dp(k+1,vector<int>(n+1,-1));
        long long ans = solve(k,1,n,dp);
        cout<<ans<<'\n';
        }
    }
