#include<bits/stdc++.h>
using namespace std;
int n,p,q,r;
#define int long long
const int INF = 4e18;
// 
// int dp[4][100001];
// int solve(vector<int>&a,int i,int x){
//     if (i < 0 and x >0)  return -INF;
//     if( x == 0) return 0;
//     if(dp[x][i]!=-1) return dp[x][i];
//     if(x == 3){
//         return dp[x][i] = max({solve(a,i-1,x),r*a[i]+solve(a,i-1,2),r*a[i] + solve(a,i,2)});
//     }
//     else if(x == 2){
//         return dp[x][i] =  max({solve(a,i-1,x) , q*a[i] + solve(a,i-1,1),q*a[i] + solve(a,i,1)});
//     }
//     else return dp[x][i] =  max({solve(a,i-1,x),p*a[i] + solve(a,i-1,0),p*a[i] +solve(a,i,0)});
// }
signed main(){
    // memo ki maa ka ......
    cin>>n>>p>>q>>r;
    vector<int>a(n);
    for(auto &x : a) cin>>x;
    
    vector<vector<int>>dp(n+1,vector<int>(4,-INF));
    dp[0][0] = 0;
    
    for(int i = 1;i<=n;i++){
        dp[i][0] = 0;
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=3;j++){
            if(j == 1) dp[i][j] = max(dp[i-1][j],p*a[i-1] + dp[i-1][j-1]);
            else if(j == 2) dp[i][j] = max({dp[i-1][j],q*a[i-1] + dp[i-1][j-1],q*a[i-1]+dp[i][j-1]});
            else dp[i][j] = max({dp[i-1][j],r*a[i-1] + dp[i-1][j-1],r*a[i-1] + dp[i][j-1]});
        }
    }
    cout<<dp[n][3]<<'\n';
    
    
}