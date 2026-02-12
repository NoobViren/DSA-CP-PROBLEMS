#include<bits/stdc++.h>
using namespace std;
bool solve(string s,int i,int sum,int a ,int b){
   if(i == s.size()) return sum == 0;
   if(s[i] == '+'){
    return solve(s,i+1,sum+a,a,b) || solve(s,i+1,sum+b,a,b);
   }
   else{
    return solve(s,i+1,sum-a,a,b) || solve(s,i+1,sum-b,a,b);
   }
}
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int q;
    cin>>q;
    vector<pair<int,int>>p;
    for(auto &x : p){
        cin>>x.first>>x.second;
    }
    for(auto& i : p){
        cout<<solve(s,0,0,i.first,i.second)<<'\n';
    }
}