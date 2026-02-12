#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>a(n),p(n);
        
        for(int i = 0;i<n;i++){
            a[i] = s[i]-'0';
        }
        p[0] = a[0];
        unordered_map<int,int>mpp;
        mpp[p[0]]++;
        for(int i = 1;i<n;i++){
            p[i] = p[i-1] + a[i];
            
            mpp[p[i]-i]++;
        }
        int ans = 0;
        for(auto i : mpp){
          int a = i.first;
          int b = i.second;
          if(a == 1){
            ans += b*(b+1)/2;
          }
          else ans += b*(b-1)/2;
        }

       cout<<ans<<'\n';


    }
}