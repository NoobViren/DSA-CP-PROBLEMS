#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
// a= 0 for deleting 1 for end

int solve(string &s,string &t,int i,int j,int a,vector<vector<vector<int>>>&dp){
   if(i<0 && j<0) return 0;
   if(j<0 && i>=0) return a==1;
   if(i<0 && j>=0) return INF;
   if(dp[a][j][i]!=-1) return dp[a][j][i];
   if(s[i] == t[j]){
       return dp[a][j][i] =  min((a==0) +solve(s,t,i-1,j-1,1,dp),solve(s,t,i-1,j,0,dp));
    }
   
  else{
      return dp[a][j][i] =  solve(s,t,i-1,j,0,dp);
  }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    string s,t;
	    cin>>s>>t;
	    vector<vector<vector<int>>>dp(3,vector<vector<int>>(m,vector<int>(n,-1)));
	    int ans = solve(s,t,n-1,m-1,1,dp);
	    if(ans>=1e9) cout<<-1<<'\n';
	     else cout<<ans<<'\n';
	}

}
