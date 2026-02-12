#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c0=0,c1=0;
        for(int i= 0;i<n;i++){
          if(s[i]=='0') c0++;
          else c1++;
        }
        string temp = s;
        string temp1 = s;
        reverse(temp1.begin(),temp1.end());
        sort(temp.begin(),temp.end());
        if(s==temp){
            cout<<0<<'\n';
        }
        else if(temp==temp1){
           cout<<min(c0,c1)<<'\n';
        }
        else{
        
        
        if(c0==1 || c1 == 1){
            cout<<1<<'\n';
        }
        if(c1>c0){
            cout<<c0-1<<'\n';
        }
        else{
            cout<<c1-1<<'\n';
        }
       
        
    }
}
}