#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long>a(n);
        for(auto &x : a){
            cin>>x;
        }
        long long sum = 0;
        if(k==1){
            long long m = 0;
            for(int i= 0;i<n;i++){
                if(i==0){
                    m = max(m,a[i]+a[n-1]);
                }
                else if(i==n-1){
                    m = max(m,a[n-1]+a[0]);
                }
                else{
                    m = max(m,a[i]+a[n-1]);
                    m = max(m,a[i]+a[0]);
                }
            }
              cout<<m<<endl;
        }
        else if(k>1){
        sort(a.begin(),a.end());
        long long i = n-1;
       
        while(k+1 && i>=0){
            sum +=a[i];
            i--;
            k--;
        }
        cout<<sum<<endl;
    }
        
         
    }
}