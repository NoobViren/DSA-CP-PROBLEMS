#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int solve(vector<int>&a,int i,int l,map<pair<int,int>,int>&dp){
    if(i==a.size()){
        return (l>0) ? 1: 0;
    }
    if(dp.count({i,l})) return dp[{i,l}];
    int skip = solve(a,i+1,l,dp);
    int pick = 0;
    if(a[i]%(l+1)==0){
        pick = solve(a,i+1,l+1,dp)%MOD;
    }
    return dp[{i,l}] = skip + pick;
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &x : a){
        cin>>x;
    }
    map<pair<int,int>,int>dp;
    cout<<solve(a,0,0,dp)<<'\n';

}