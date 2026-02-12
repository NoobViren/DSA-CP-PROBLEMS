#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
      int x,y,a;
      cin>>x>>y>>a;
      int b = a%(x+y);
      if(b==0){
        cout<<"NO"<<endl;
        
      }
      else if(b==x){
        cout<<"YES"<<endl;
       
      }
      else if(b<x){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }
      
    }
    return 0;
}