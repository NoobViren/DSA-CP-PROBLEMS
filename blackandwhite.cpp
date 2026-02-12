#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int l = 0,r = k-1;
        map<char,int>mpp;
        for(int i = l;i<=r;i++){
             if(s[i]=='B'){
                mpp[s[i]]++;
             }
        }
        int m = INT_MAX;
        while(r<n){
            m = min(m,k-mpp['B']);
            mpp[s[l]]--;
            if(mpp[s[l]]==0){
                mpp.erase(s[l]);
            }
            l++;
          
           
            r++;
            mpp[s[r]]++;
        }
        cout<<m<<endl;
    }
}