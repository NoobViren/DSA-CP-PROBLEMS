#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(auto &x :a ) cin>>x;
        map<int,int>mpp;
        for(int i = 0;i<n;i++) mpp[a[i]]++;
        int m = mpp.size();
        cout<<m<<'\n';
    }
}