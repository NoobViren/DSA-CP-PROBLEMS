#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
int l,r;



signed main(){
   int n;
   cin>>n;
   cin>>l>>r;
   // dp[i][rem] = n of ways to build a sequence of i integers with sum = rem
   vector<vector<int>>dp(n+1,vector<int>(3));
   dp[0][0] = 1;
   dp[0][1] = dp[0][2] = 0;
   
   int a = 0,b = 0,c = 0;
   for(int i = l;i<=r;i++){
    if(i%3 == 0) a++;
    else if(i%3 == 1) b++;
    else c++;
   }
   for(int i = 0;i<n;i++){
     for(int rem = 0;rem<3;rem++){
      dp[i+1][rem%3] += (dp[i][rem]*a)%mod;
      dp[i+1][(rem+1)%3] += (dp[i][rem]*b)%mod;
      dp[i+1][(rem+2)%3] += (dp[i][rem]*c)%mod;
     }

   }
   cout<<dp[n][0]%mod<<'\n';
   
}