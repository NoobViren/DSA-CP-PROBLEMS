#include<bits/stdc++.h>
using namespace std;
vector<int>p(1e3+1,50);
void pre(){
    p[0] = -1;
    p[1] = 0 ;
    for(int i = 1;i<1e3+1;i++){
        for(int j = 1;j<=i;j++){
            int b = i+i/j;
            if(b<=1000)
            p[b] = min(p[b],p[i]+1);
        }
    }
}
int solve(int k,vector<int>&b,vector<int>&c,int i,vector<vector<int>>&dp){
    if(i==c.size() || k==0) return 0;
    if(dp[i][k]!=-1) return dp[i][k];
    int skip = solve(k,b,c,i+1,dp);
    int take = 0;
    if(k>=b[i]){
       take = c[i] + solve(k-b[i],b,c,i+1,dp);
    }
    return dp[i][k] = max(take,skip);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>b(n),c(n);
        for(int i = 0;i<n;i++){
            cin>>b[i]>>c[i];
        }
        pre();
        for(int i = 0;i<n;i++){
            b[i] = p[b[i]];
        }
        k = min(k,12);
     vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
     cout<<solve(k,b,c,0,dp)<<'\n';

    }
}