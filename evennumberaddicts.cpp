#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(auto &x : a) cin>>x;
        int odd = 0,even = 0;
        for(int i = 0;i<n;i++){
            if(a[i]%2==0){
                even++;
            }
            else odd++;
        }
        if(odd%4==0){
            cout<<"Alice"<<'\n';
        }
        else if(odd%4==2){
            cout<<"Bob"<<'\n';
        }
        else if(odd%4==1){
            if(even%2==0){
                cout<<"Bob"<<'\n';
            }
            else{
                cout<<"Alice"<<'\n';
            }
        }
        else if(odd%4==3){
            cout<<"Alice"<<'\n';
        }
    }
}