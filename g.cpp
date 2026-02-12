#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&a,vector<int>&c,int i){
    if(i<0) return 0;
    int ans = 0;
    for(int j = i-1;j>=0;j--){
        if(a[i]>=a[j]){
            ans = max(ans,c[i] + solve(a,c,j));
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),c(n);
        for(auto &x : a) cin>>x;
        for(auto &y : c) cin>>y;
        int sum = accumulate(c.begin(),c.end(),0);
        int ans = solve(a,c,n-1);
        cout<<sum - ans<<'\n';
    }
}