#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i =0;i<n;i++){
            cin>>v[i];
        }
        for(int j=0;j<n;j++){
            v[j] = v[j]%k;
        }
       
    }
}