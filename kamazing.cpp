#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(auto &x : a) cin>>x;
        map<int,vector<int>>mpp;
        vector<int>ans(n,-1);
        for(int i = 0;i<n;i++){
            mpp[a[i]].push_back(i);
        }
        for(auto it : mpp){
            vector<int>v = it.second;
            int m  = 0;
            m = max(m,v[0]+1);
            for(int i = 1;i<v.size()-1;i++){
               m= max(m,v[i]-v[i-1]);
            }
            m = max(m,n-v[v.size()-1]);
            if(ans[m-1] == -1){
                ans[m-1] = it.first;
            }
            
        }
        for(auto &x : ans) cout<<x<<" ";
        cout<<'\n';
    }
}