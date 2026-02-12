#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>a(n);
        vector<int>x(q);
        int j = 0;
      for(j = 0;j<n;j++){
        cin>>a[j];
      }
      for(j = 0;j<q;j++){
        cin>>x[j];
      }
      long long prev = 31;
      for(int i = 0;i<q;i++){
        long long k = pow(2,x[i]);
        long long d = pow(2,x[i]-1);
        if(x[i]>=prev) continue;
        for(j=n-1;j>=0;j--){
           
            if(a[j]%k==0){
               a[j]+=d;
               
            }
        }
        prev = x[i];
      }
      for(j = 0;j<n;j++){
        cout<<a[j]<<" ";
      }
      cout<<endl;
    }
}