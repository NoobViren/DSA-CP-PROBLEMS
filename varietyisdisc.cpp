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
        unordered_map<int,int>mpp;
    for(int i = 0;i<n;i++){
        mpp[a[i]]++;
    }
    int l = 0,r=0,ans1=0,ans2=0,maxlen=0;
    while(r<n){
        if(mpp[a[r]]==1){
           
           if(r-l+1>maxlen){
            maxlen = r-l+1;
            ans1 = l;
            ans2 = r;
           }
           r++;
        }
       else{
        r++;
        l = r;
       }
        

    }
    if(maxlen==0) cout<<0<<'\n';
     else cout<<ans1+1<<" "<<ans2+1<<'\n';
    }
}