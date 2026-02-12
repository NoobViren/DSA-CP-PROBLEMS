#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        if(k==1){
            cout<<n<<'\n';
        }
        else if(n==1){
            cout<<1<<'\n';
        }
        
      else{
        long long p = 0;
        while(n>0){
          p += n%k;
          n = n/k;
        }
        cout<<p<<endl;
      }
    }
        
    }
