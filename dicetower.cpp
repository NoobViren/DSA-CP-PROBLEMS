#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>>v(n);
    for(auto &x :v){
        cin>>x.first>>x.second;
    }
    int flag = 0;
    for(auto i : v){
        for(auto j : v){
            if((i.second == j.second && i.first + j.first==7) ||(i.first == j.first && i.second + j.second==7)){
                flag = 1;
                break;
            }      
    }
    if(flag == 1){
        break;
    }
}
if(flag ==1 || n==1){
    cout<<"YES"<<'\n';
}
else{
    cout<<"NO"<<'\n';
}
}