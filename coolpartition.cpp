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
        unordered_map<int,int>mpp;
        
        for(int i = 0;i<n;i++){
            mpp[a[i]]++;
        }
        int count = 1;
        set<int>prev,total;
        for(int i = 0;i<n;i++){
            total.insert(a[i]);
            if(prev.count(a[i])){
                prev.erase(a[i]);
            }
            if(prev.size()==0){
                count ++;
                prev = total;
            }
           
            
        }
        cout<<count<<'\n';
    }
}