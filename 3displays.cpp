#include<bits/stdc++.h>
using namespace std;
long long dp[3005][5];
long long solve(vector<long long>&a,vector<long long>&c,long long i,long long k){
   if(i<0 || k==0) return 0;
   if(k==1) return c[i];
   if(dp[i][k]!=-1) return dp[i][k];
   long long ans = INT_MAX;
   for(long long j = i-1;j>=0;j--){
     if(a[j]<a[i]){
        ans = min(ans,c[i]+ solve(a,c,j,k-1));
     }
   }
   
   return dp[i][k] = ans;
}
int main(){
    long long n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    vector<long long>a(n),c(n);
    for(auto &x : a) cin>>x;
    for(auto &y : c) cin>>y;
    long long m = INT_MAX;
    for(long long i = n-1;i>=0;i--){
        m = min(m,solve(a,c,i,3));
    }
    if(m==INT_MAX) cout<<-1<<'\n';
    else cout<<m<<'\n';
}