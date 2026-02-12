#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        
        vector<long long>a(n);
        for(auto &x : a) cin>>x;
        if(n==2){
           if(a[1]-a[0]>0){
            cout<<0<<'\n';
           }
           else{
            cout<<a[0]-a[1]<<'\n';
           }
        }
        else{
        long long count = 0;
        for(int i =1;i<n-1;i+=2){
            long long diff = a[i-1]+a[i+1] - a[i];
            if(diff>0){
                count+=diff;
                if(a[i+1]<=diff){
                    a[i+1] = 0;
                }else {
                   a[i+1] -= diff;
                }
            }
            
        }
        if((n-1)%2!=0 && a[n-1]<a[n-2]){
            count+=a[n-2]-a[n-1];
        }
        cout<<count<<'\n';
    }
}
}