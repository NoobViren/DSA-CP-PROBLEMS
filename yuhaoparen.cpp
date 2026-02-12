#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    while(n--){
        string s;
        cin>>s;
        int a = 0,b = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i] == '(') a++;
            else b++;
        }
        v.push_back({a,b});

    }
    map<pair<int,int>,int>mpp;
    for(int i = 0;i<v.size();i++){
        mpp[v[i]]++;
    }
    int ans = 0;
    for(int i = 0;i<v.size();i++){
        int x = v[i].first, y = v[i].second;
        if(x>0 && y>0) continue;
        else if(x>0){
            if(mpp.find({0,x}) != mpp.end()){
                ans++;
            }
        }
        else if(y>0){
            if(mpp.find({y,0}) != mpp.end()){
                ans++;
            }
        }
    }
    cout<<ans<<'\n';
}