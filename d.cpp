#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(auto &x :a) cin>>x;
        int count = 0;
        set<int>s(a.begin(),a.end());
        map<int,vector<int>>mpp;
        for(int i = 0;i<n;i++) {
            mpp[a[i]].push_back(i);
        }
        
    }

}