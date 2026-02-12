#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,j,k;
        cin>>n>>j>>k;
        vector<int>a(n);
        for(auto &x : a){
            cin>>x;

        }
        int m = *max_element(a.begin(),a.end());
        if(a[j-1]==m){
            cout<<"YES"<<endl;
        }
        else if(a[j-1]!=m && n-1>n-k){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}