#include<bits/stdc++.h>
using namespace std;
#define int long long
bool check(vector<int>&a,int t,int m,int n){
    unordered_map<int,int>mpp;
    for(int i = 0;i<a.size();i++){
        mpp[a[i]]++;
    }
    for(int i = 1;i<=n;i++){
        if(mpp.find(i) == mpp.end()){
            mpp[i] = 0;
        }
    }
    int ans = 0;
    for(auto it : mpp){
        
        ans += min(t,it.second + (t - it.second)/2);

    }
    if(ans>=m) return true;
    return false;
  
}
signed main(){
    int t;
    cin>>t;

    while(t--){
      int n,m;
      cin>>n>>m;
      vector<int>a(m);
      for(auto &x : a){
        cin>>x;
      }
      int ans = 0;
      int low = 1, high = 2*m;
      while(low<=high){
       int mid = low +(high-low)/2;
       if(check(a,mid,m,n)==true){
           ans = mid;
           high = mid -1;
       }  
       else low = mid + 1;
      }
      cout<<ans<<'\n';
    }
    
}
