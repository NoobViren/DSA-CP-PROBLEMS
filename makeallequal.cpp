#include<bits/stdc++.h>
using namespace std;
bool checkequal(vector<int>v){
    for(int i = 0;i<v.size()-1;i++){
        if(v[i]!=v[i+1]) return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        if(checkequal(v)){
            cout<<0<<endl;
        }
        else{
        int m = LLONG_MAX;
        int p1 = 0,p2 = 0;
        while(p1<n){
            while(p2<n && v[p1]==v[p2]) p2++;
            m = min(m,v[p1]*p1 + (n-p2)*v[p2-1]);
            p1 = p2;
        }
        cout<<m<<endl;
    }
    }
}