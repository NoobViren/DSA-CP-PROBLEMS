#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &x : a) cin>>x;
    vector<pair<int,int>>p(n),s(n);
    p[0].first = 1,p[0].second = 0,p[1].first = 1,p[1].second = 0;
    bool flag = false;
    for(int i = 2;i<n;i++){
        if(a[i]-a[i-1] == a[i-1]-a[i-2] && flag == false){
            flag = true;
            p[i].first = 3;
            p[i].second = a[i]-a[i-1];
        }
        else if(a[i]-a[i-1] == a[i-1]-a[i-2] && flag == true){
            p[i].first = p[i-1].first + 1;
            p[i].second = a[i]-a[i-1];
        }
        else{
            p[i].first = 1,p[i].second = 0;
            flag = false;
        }
    }
    s[]
    for(int i = n-2)
    for(auto &i : p){
        cout<<"{"<<i.first<<","<<i.second<<'}'<<" ";
    }
    int ans = 0;
    for(int i = 2;i<n;i++){
       ans = max(ans,p[i-1].first+1);
       ans = max(ans,p[i])
    }
    
}