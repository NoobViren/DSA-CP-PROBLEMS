#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(auto &x : a) cin>>x;
        int sum = accumulate(a.begin(),a.end(),0LL);
        int ans = sum - n + 1;
        int count = 0;
        for(int i = 0;i<n;i++){
            if(a[i]>0) count++;
        }
        cout<<min(ans,count)<<'\n';
        
        
    }
}