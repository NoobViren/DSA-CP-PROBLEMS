#include<bits/stdc++.h>
using namespace std;
int isSubstring(char s[],char subs[],int n,int m){
     int ans = -1;
    for(int i = 0;i<n-m+1;i++){
        for(int j = i;j<i+m;j++){
            if(s[j]!=subs[j-i]){
                break;
            }
            
            
        }
        
        
    }
  return ans;
    
}
int main(){
    int n;
    cout<<"enter size of string";
    cin>>n;
    char s[n];
    for(int i = 0;i<n;i++){
        cin>>s[i];
    }
    int m;
    cout<<"enter size of substring";
    cin>>m;
    char subs[m];
    for(int j = 0;j<m;j++){
        cin>>subs[j];
    }
   int ans = isSubstring(s,subs,n,m);
   if(ans == -1){
    cout<<"Not a substring ";
   }
   else{
    cout<<ans;
   }
}