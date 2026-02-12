#include<bits/stdc++.h>
using namespace std;
#define int long long
int dp[3][100001];
int solve(vector<int>&a,vector<int>&b,int i,int turn){
    if(i == a.size()) return 0;
    if(dp[turn][i]!=-1) return dp[turn][i];
    if(turn == 0){
        return dp[turn][i] = max(a[i] + solve(a,b,i+1,1),solve(a,b,i+1,0));
    }
    return dp[turn][i] = max(b[i] + solve(a,b,i+1,0),solve(a,b,i+1,1));
}
signed main(){
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(auto &x : a) cin>>x;
    for(auto &y : b) cin>>y;
    memset(dp,-1,sizeof(dp));
    cout<<max(solve(a,b,0,0),solve(a,b,0,1))<<'\n';
}