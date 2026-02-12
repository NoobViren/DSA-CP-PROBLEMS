#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,x,k;
        cin>>n>>x>>k;
        string s;
        cin>>s;
        long long count = 0;
        long long l=0,r=0;
        long long temp =0;
    for(int i = 0;i<n;i++){
        if(s[i]=='L') x--;
        else x++;
        if(x==0){
            temp = i+1;
            count = 1;
            break;
        }
    }
    if(count==0){
        cout<<0<<'\n';
    }
    else{
        long long c= 0;
        long long a = 0;
       for(long long i = 0;i<n;i++){
        if(s[i]=='L') c++;
        else c--;
        if(c==0) {
            a = i+1;
            break;
        }
       }
       if(a==0){
        cout<<1<<'\n';
       }
       else{
    
       
          long long ans = (k-temp)/a + 1;
          cout<<ans<<'\n';
       }
    }
        
        
    }
}