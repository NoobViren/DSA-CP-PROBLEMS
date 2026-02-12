#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)%3!=0){
            cout<<"NO"<<'\n';
        }
        else{
      long long k = (a+b+c)/3;
      if( k-a>=0 && k-b>=0 && k-a + k-b <= c-k ){
            cout<<"YES"<<'\n';
        }
        else {
            cout<<"NO"<<'\n';
        }
    }
    }
}