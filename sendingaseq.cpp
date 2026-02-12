#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<int>a(n+1);
    for(int i = 1;i<=n;i++) cin>>a[i];
    vector<bool>dp(n+1);
    // what does dp[i] represent?
    // let dp[i] represent wether we can start or end a sequence at i
    // if we start a sequence then , i + a[i] +1 < n
    // if we end a sequence ... then i-a[i]-1>=0 && dp[i-a[i]-1] = true 
    dp[0] = true;
    for(int i = 1;i<=n;i++){
        if(i+a[i]<=n && dp[i-1] == true){
            dp[i + a[i]] = true;
        }
        if(i-a[i]-1>=0 && dp[i-a[i]-1] == true){
            dp[i] = true;
        }
    }
    if(dp[n] == 1) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
   }
}