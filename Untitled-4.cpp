#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&a,int n,int l,int r){

    if((a[l]+a[r])%2==0 || l>=r) return 0;
    return 1 + min(solve(a,n,l+1,r),solve(a,n,l,r-1));
}
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<int>a(n);
      for(auto &x:a) cin>>x;
      sort(a.begin(),a.end());
      int ans = solve(a,n,0,n-1);
      cout<<ans<<'\n';
   }
}
           
        
  