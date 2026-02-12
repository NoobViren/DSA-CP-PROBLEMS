#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int k = 2*n;
        vector<int>a(k);
        for(auto &x : a) cin>>x;
        
        sort(a.begin(),a.end());
        if(k==2){
            cout<<a[0]<<" "<<a[0]+a[1]<<" "<<a[1]<<'\n';
        }
        else{
        for(int i = 0;i<k-1;i++){
            swap(a[i],a[i+1]);
        }
        int osum = 0;
        for(int i = 0;i<k;i+=2){
            osum+=a[i];
        }
        int esum = 0;
        for(int i = 1;i<k;i+=2){
            esum+=a[i];
        }
        int ans = osum-esum;
        cout<<ans<<" ";
        for(int i = 0;i<k;i++){
            cout<<a[i]<<" ";
        }
     cout<<'\n';
    }
}
}