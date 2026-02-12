#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r,b;
        cin>>n>>r>>b;
        int x= b+1;
        int k = r%x;
        int m = r/x;
        for(int i = 0;i<x;i++){
            if(i>=1) {
            cout<<"B";
            }
            for(int j = 0;j<m;j++){
                cout<<"R";
            }
            if(k>0){
                cout<<"R";
                k--;
            }
        }
        cout<<endl;
    }
}