#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int k = ((x-y) - 8)%9;
       
        if((x>y  &&k==0 )|| y-x==1) {
              cout<<"Yes"<<'\n';
        }
        else {
            cout<<"No"<<'\n';
        }
        
    }
}