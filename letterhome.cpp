#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,s;
        cin>>n>>s;
        vector<int>a(n);
        for(auto &x : a){
            cin>>x;
        }
        sort(a.begin(),a.end());
        long long m = a[n-1];
        if(s>=m){
            cout<<s-a[0]<<endl;
        }
        else if(s<a[0]){
            cout<<a[n-1]-s<<endl;
        }
        else{
           cout<< 2*(min(abs(s-a[0]),abs(s-a[n-1]))) + max(abs(s-a[0]),abs(s-a[n-1]))<<endl;
        }

    }
}