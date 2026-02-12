#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int dp[101][101];
int solve(int n,int k,int d,int maxi){
    if(n<0) return 0;
    if( n == 0) return maxi>=d;
    if(dp[n][maxi]!=-1) return dp[n][maxi];
    int ans = 0;
    for(int i = 1;i<=k;i++){
      ans  = (ans +  solve(n-i,k,d,max(maxi,i)))%mod;
    }
    return dp[n][maxi] = ans%mod;
}
int main(){
    int n,k,d;
    cin>>n>>k>>d;
    memset(dp,-1,sizeof(dp));
    int ans = solve(n,k,d,0);
    cout<<ans<<'\n';

}