#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&a,int start,vector<int>&dp){
    if(start>=a.size()) return 0;
    if(dp[start]!=-1) return dp[start];
    int ans = solve(a,start+1,dp);
    if(start+a[start]<a.size()){
    ans = max(ans,a[start] + 1 + solve(a,start+a[start]+1,dp));
    }
    return dp[start] = ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(auto &x : a){
            cin>>x;
        }
        vector<int>dp(n+1,-1);
        int ans = solve(a,0,dp);
        
        cout<<n-ans<<'\n';
    }
}