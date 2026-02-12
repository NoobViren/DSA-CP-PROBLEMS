#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;
    sort(a.begin(),a.end());
    vector<int>dp(n+1,INT_MAX);
    if(a[0] == 1) cout<<1<<" ";
    else cout<<-1<<" ";
    a.erase(remove(a.begin(), a.end(), 1), a.end());
    
    a.erase(unique(a.begin(), a.end()), a.end());
    for(auto x : a) dp[x] = 1;
    for(auto x : a){
        for(int i = x;i<=n;i+=x){
            if(dp[i/x]!=INT_MAX){
                dp[i] = min(dp[i],1 + dp[i/x]);
            }
        }
    }
    for(int i = 2;i<=n;i++){
        if(dp[i]==INT_MAX) {
            cout<<-1<<" ";
        }
        else cout<<dp[i]<< " ";
    }
    cout<<'\n';
   
}
}