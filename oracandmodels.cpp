#include<bits/stdc++.h>
using namespace std;
int dp[100001];
int solve(vector<int>&a,int i){
    if(i >= a.size()) return 0;
    if(dp[i]!=-1) return dp[i];
    int ans = 1;
    for(int j = 2*i;j<a.size();j+=i){
        if(j<a.size() && a[j]>a[i]){
          ans = max(ans,1 + solve(a,j));
        }
    }
    return dp[i] = ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n+1);
        for(int i = 1;i<=n;i++){
            cin>>a[i];
        }
        // memset(dp,-1,sizeof(dp));
        vector<int>dp(n+1,1);
        
        
        for(int i = 1;i<=n;i++){
            for(int j = 2*i;j<=n;j+=i){
                if(a[j]>a[i]){
                    dp[j] = max(dp[j],1+dp[i]);
                }
            }
        }
        cout<<*max_element(dp.begin(),dp.end())<<'\n';
        

    }
}