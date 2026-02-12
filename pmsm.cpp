#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<int>a(n);
      for(auto &x : a){
        cin>>x;
   }
   vector<int>pm(n);
    pm[0] = a[0];
    for(int i = 1;i<n;i++){
        pm[i] = min(pm[i-1],a[i]);
    }
    vector<int>sm(n);
    sm[n-1] = a[n-1];
    for(int i= n-2;i>=0;i--){
        sm[i] = max(sm[i+1],a[i]);
    }

    for(int i = 0;i<n;i++){
        if(a[i]==pm[i] || a[i] == sm[i]){
            cout<<1;
        }
        else cout<<0;
    }
    cout<<'\n';
   }
}
