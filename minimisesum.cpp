#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(auto &x : a){
            cin>>x;

        }
        cout<<min(a[0],a[1])+a[0]<<'\n';
        
       
        

    }
}
