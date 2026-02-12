#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,int>mpp;
        for(int i = 0;i<n;i++){
            mpp[s[i]]++;
        }
        int c1 = 0;
        for(auto it:mpp){
          if(it.second%2!=0) c1++;
        }
        
        if(c1 > k+1){
            cout<<"NO"<<endl;

        }
        
        else{
            cout<<"YES"<<endl;
        }
    }
}