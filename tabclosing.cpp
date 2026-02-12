#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    //idea is to find the ops in which curr length = b;
    int t;
    cin>>t;
    while(t--){
        ll a,b,n;
        cin>>a>>b>>n;
        
        if( a/n==b || a == b){
            cout<<1<<'\n';
            
        }
        
        else if(a/n < b){
            cout<<2<<'\n';
        }
        else{
            cout<<1<<'\n';
        }
        
        
        
        
    }
}