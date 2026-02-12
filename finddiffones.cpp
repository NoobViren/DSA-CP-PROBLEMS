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
        int q;
        cin>>q;
        vector<pair<int,int>>p(q);
        for(auto &y : p) cin>>y.first >>y.second;
        set<pair<int,int>>s;
        //find all pairs of indices i,j such that all elements bw i and j are the same
        
        int l = 0,r=1;
        while(r<n){
            if(a[r]!=a[l] && r-l>1){
               s.insert({l,r-1});
               l=r;
            }
            r++;
        }
        for(auto it : p){
            if(s.count(it)){
                
            }
        }
    }
}