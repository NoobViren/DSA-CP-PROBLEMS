#include<bits/stdc++.h>
using namespace std;
bool isSorted(string s){
    for(int i =0;i<s.size()-1;i++){
        if(s[i]>s[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
      cin>>n;
      string s;
      cin>>s;
      if(isSorted(s)) {
        cout<<"NO"<<endl;
      }
      else{
        int a=0,b=0;
        for(int i = 0;i<n-1;i++){
            if(s[i]>s[i+1]){
               a= i;
               b = i+1;
               break;
            }
        }
        cout<<"YES"<<endl;
        cout<<a+1<<" "<<b+1<<endl;
      }
    }
