#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i =0;i<n;i++){
            cin>>v[i];
        }
        map<int,int>mpp;
        mpp[1]=1;
        mpp[2]=2;
        mpp[3]=1;
        mpp[0] = 3;
        mpp[5] = 1;
        int j =0;
        for( j =0;j<v.size();j++){
            if(mpp.find(v[j])!=mpp.end()){
                mpp[v[j]]--;
            }
            if(mpp[v[j]]==0){
                mpp.erase(v[j]);
            }
            if(mpp.size()==0){
                break;
            }
        }
        if(j!=n){
            cout<<j+1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}