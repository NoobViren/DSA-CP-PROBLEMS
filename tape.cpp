#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&a,int k,int mid){
    int i = 0;
    int ans = 0;
    while(i<a.size() && k>0){
       int x = a[i] + mid;
       int idx = upper_bound(a.begin(),a.end(),x) - a.begin();
       if(idx == 0) return -1;
       ans+= a[idx-1] - a[i] + 1;
       i = idx;
       k--;
  }
  if(k==0 && i >=a.size()-1) return ans;
  return -1;
}
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(n);
    for(auto &x :a) cin>>x;
    int maxi = *max_element(a.begin(),a.end());
    int low = 0,high = maxi;
    int ans = 0;
    while(low<=high){
       int mid = low + (high-low)/2;
       int res = solve(a,k,mid);
       if(res>0){
        ans = res;
        high = mid -1;
       }
       else{
        low = mid + 1;
       }
    }
    cout<<ans<<'\n';

}