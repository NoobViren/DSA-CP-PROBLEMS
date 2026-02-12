#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
       int ans = 0;
       for(int i = 0;i<n;i++){
         map<char,int>mpp;
         int k = 0;
         int mx = 0;
         for(int j = i;j<n && j<i+100;j++){
           
           if(mpp[s[j]] == 0) k++;
           mpp[s[j]]++;
           mx = max(mx,mpp[s[j]]);
           if(mx<=k) ans++;
         }
       }
       cout<<ans<<'\n';
  }
}