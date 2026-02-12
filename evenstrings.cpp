#include<bits/stdc++.h>
using namespace std;
int dp[200006];
int solve(string &a,int i){
   if(i<0) return 0;
   if(dp[i]!=-1) return dp[i];
   int ans = INT_MAX;
   for(int j = i-1;j>=0;j--){
    if(a[i]==a[j]){
       ans = min(ans,i-j-1 + solve(a,j-1));
    }
   }
   ans = min(ans, 1 + solve(a, i - 1));
   if(ans == INT_MAX) ans = i+1;
   return  dp[i] = ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        
       string a;
       cin>>a;
       int n = a.size();
       memset(dp,-1,sizeof(dp));
        cout<<solve(a,n-1)<<'\n';
    }
}