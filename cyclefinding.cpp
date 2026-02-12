#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<array<int,2>>>adj(n);
    for(int i = 0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        adj[a].push_back({b,c});
    }
    vector<vector<int>>dp(n+1,vector<int>(n+1,INT_MAX));
    for(int k = 1;k<=n;k++){
        for(int i= 1;i<=n;i++){
            for(int j = 1;j<=n;j++){
                dp[i][j] = min(dp[i][j],dp[i][k]+dp[k][j]);
            }
        }
    }
    int flag = 0;
    for(int i = 0;i<n;i++){
        if(dp[i][i]<0){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout<<"YES"<<'\n';
    }
    else cout<<"NO"<<'\n';

}