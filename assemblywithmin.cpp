#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a = (n*(n-1))/2;
        vector<int>v(a);
        for(auto &x: v){
            cin>>x;
        }
        sort(v.begin(),v.end());
        int k = 0;
        for(int i = 0 ;i<a;i+=n-k){
            cout<<v[i]<<" ";
            k++;
        }
        cout<<1000000000<<endl;
        
    }
}