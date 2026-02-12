#include<bits/stdc++.h>
using namespace std;
#define int long long
int solve(vector<int>&a,int n,int k,int x){
     int ans = n -k+1;
     if(ans>=n) return -1;
     x-=a[n-k];
     if(x<=0) return ans;
    for(int i = n-k+1;i<n;i++){
        x-=a[i];
        ans++;
       if(x<=0){
        return ans;
       }
      
    }
    return -1;
}
signed main(){
    int n,k,x;
    cin>>n>>k>>x;
    vector<int>a(n);
    for(auto &x : a) cin>>x;
    sort(a.rbegin(),a.rend());
    int ans = solve(a,n,k,x);
    
    cout<<ans<<'\n';
}