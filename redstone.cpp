#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&a){
    map<int,int>mpp;
    for(int i = 0;i<a.size();i++){
        mpp[a[i]]++;
        if(mpp[a[i]]>1){
            return true;
        }
        
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(auto &x : a) cin>>x;
        bool ans = check(a);
        if(ans==true){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }


    }
}