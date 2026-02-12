#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&a,int i){
    if(i<0) return 0;
    int ans = 1;
    for(int k = i-1;k>=0;k--){
       if(a[k] == a[i]-1){
         ans = max(ans,1+solve(a,k));
       }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &x : a) cin>>x;
    int ans = solve(a,n-1);
    cout<<ans<<'\n';

}