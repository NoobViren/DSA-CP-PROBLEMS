#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        //k is the number of 1's
        
        int x = n-k;
        if(k>0){
        cout<<'1';
        }
        while(x-1>0){
            cout<<'0';
            x--;
        }
        int d = k-1;
        while(d>0){
            cout<<'1';
            d--;
        }
        if(n>k){
        cout<<'0';
        }
        cout<<'\n';
    }
 }
