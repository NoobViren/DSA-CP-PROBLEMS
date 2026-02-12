#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int>arr(n);
        for(auto &x : arr){
            cin>>x;
        }
        int pf = 0;
        map<int,int>mpp;
        int i = 0;
        int m = 0;
        for(i = 0;i<n;i++){
            pf+=arr[i];
            if(pf==s){
                m = max(m,i+1);
            }
          else if( mpp.find(pf-s)!=mpp.end()){
                int a = mpp[pf-s];
                m = max(m,i-a);
            }
            if(mpp.find(pf)==mpp.end()){
                mpp[pf] = i;
            }
            
        }
        if(m==0) cout<<-1<<endl;
        else cout<<n-m<<'\n';
    }
}