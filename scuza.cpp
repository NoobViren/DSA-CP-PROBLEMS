#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,q;
        cin>>n>>q;
        vector<long long>a(n);
        vector<long long>b(q);
        for(auto &x : a){
            cin>>x;
        }
        for(auto &y : b){
            cin>>y;
        }
        vector<long long >pfsa(n);
        pfsa[0] = a[0];
        for(int k = 1;k<n;k++){
            pfsa[k]  = pfsa[k-1] + a[k]; 
        }
        sort(b.begin(),b.end());
        
        int i = 0;
       
        vector<long long>ans(q);
        for(i = 0;i<q;i++){
            int idx = upper_bound(a.begin(),a.end(),b[i])-a.begin();
            if(idx== 0){
                ans[i] == 0;
            }
             else ans[i] = pfsa[idx-1];
        }
        for (auto j : ans){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}