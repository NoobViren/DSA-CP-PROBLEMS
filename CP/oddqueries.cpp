#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>v(n);
        
        for(int i =0;i<n;i++){
            cin>>v[i];
            
        }
        vector<int>pf(n);
          pf[0] = v[0];
          for(int x = 1;x<n;x++){
            pf[x] = pf[x-1] + v[x];
          }
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            l--,r--;
        int prev = pf[r] - (l > 0 ? pf[l - 1] : 0);
          int latest = (r-l+1)*k;
          int sum = pf[n-1]-prev+latest;
           
            if(sum%2!=0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}