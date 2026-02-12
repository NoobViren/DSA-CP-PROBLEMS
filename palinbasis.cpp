#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int>store;
int mod = 1e9+7;
void generate(){
   for(int i = 1;i<=40000;i++){
       string a = to_string(i);
       string b = a;
       reverse(b.begin(),b.end());
       if(a == b){
        store.push_back(i);
       }
   }
}
int dp[505][40001];
int solve(int i,int n){
   
   if(i==store.size()) return 0;
   if(n<0) return 0;
   if(n == 0) return 1;
   if(dp[i][n]!=-1) return dp[i][n];
   int skip = solve(i+1,n);
  
   int take = solve(i,n-store[i]);
   return dp[i][n] =  ((skip)%mod + (take)%mod)%mod;
}

signed main(){
   generate();
  
   memset(dp,-1,sizeof(dp));
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int ans = solve(0,n);
        cout<<ans<<'\n';
    }

}