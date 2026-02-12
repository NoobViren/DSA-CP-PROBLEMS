#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n,m;
    cin>>n>>m;
    map<int,int>mpp;
    for(int i = 1;i<=n;i++){
        mpp[i] = 0;
    }
    for(int i = 0;i<m;i++){
        int x,y;
        cin>>x>>y;
        mpp[x]++;
        mpp[y]++;
    }
    vector<int>ans;
    for(auto i:mpp){
        int k = n - i.second-1;
        
         int x = (k*(k-1)*(k-2))/6;
         ans.push_back(x);

        
        
    }
    for(auto &x : ans) cout<<x<<" ";
    cout<<'\n';
}