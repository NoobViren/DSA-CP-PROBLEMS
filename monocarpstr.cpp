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
        int x = 0,y = 0;
        map<int,int>mp1;
        mp1[0] = -1;
        
        vector<int>v;
        for(int i = 0;i<n;i++){
           if(s[i] == 'a') x++;
           else y++;
           int k =x-y;
           v.push_back(k);
        }
        if(v[n-1] == 0){
            cout<<0<<'\n';
            continue;
        }

        
        int ans = INT_MAX;
        for(int i = 0;i<n;i++){
          int k = (v[i] - v[n-1]);
          if(mp1.find(k)!=mp1.end()){
            ans = min(ans, i - mp1[k]);
          }
          mp1[v[i]] = i;
        }
        if(ans == n){
            cout<<-1<<'\n';
        }
        else{
            cout<<ans<<'\n';
        }
        
        
    }
}