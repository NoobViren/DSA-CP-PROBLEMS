#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
     int n;
     cin>>n;
     vector<int>h(n),a(n);
     for(auto &x : h) cin>>x;
     for(auto &y : a) cin>>y;
     vector<int>dp(n+1);
     for(int i = 0;i<n;i++){
          dp[i] = a[i];
     }
     for(int i = 1;i<n;i++){
          for(int j = 0;j<i;j++){
               if(h[i]>=h[j]){
                    dp[i] = max(dp[i],a[i] + dp[j]);
               }
          }
          
     }
     cout<<*max_element(dp.begin(),dp.end())<<'\n';
}