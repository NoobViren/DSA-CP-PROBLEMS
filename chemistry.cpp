#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        
        unordered_map<char,int>mpp;
        for(int i = 0;i<n;i++){
            mpp[s[i]]++;
        }
        long long count = 0;
        for(auto &i : mpp){
            if(i.second%2!=0){
                count++;
            }
        }
        if(count<=k+1){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
 }
