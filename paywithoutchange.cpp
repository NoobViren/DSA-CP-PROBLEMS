#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

    long long a,b,n,S;
    cin>>a>>b>>n>>S;
    if(S%n<=b && a*n+b>=S){
        cout<<"YES"<<endl;
    }
    
    else{
        cout<<"NO"<<endl;
    }
 }
}