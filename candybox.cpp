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
        vector<int>v;
        map<int,int>mpp;
        for(int i = 0;i<n;i++){
            mpp[a[i]]++;
        }
        for(auto i : mpp){
            int k = i.second;
            v.push_back(k);
        }
        sort(v.rbegin(),v.rend());
        int maxi = INT_MAX;
        int ans = 0;
        set<int>s;
        for(int i = 0;i<v.size();i++){
             if(s.count(v[i]) == 0){
                ans += v[i];
                s.insert(v[i]);
                maxi = v[i];
             }
             else{
               if(maxi){
                maxi -=1;
                s.insert(maxi);
                ans+=maxi;
               }
             }
        }
        cout<<ans<<'\n';

    }
}