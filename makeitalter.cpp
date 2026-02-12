#include<bits/stdc++.h>
using namespace std;
int solve(string s,int i){
    if(i == s.size()) return 0;
    if(i+1 < s.size() && s[i]==s[i+1]){
    string s1 = s.substr(0,i) + s.substr(i+1);
    string s2 = s.substr(0,i+1) + s.substr(i+2);
    return 1 + min(solve(s1,i),solve(s2,i));
    }
    else return solve(s,i+1);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
      int ans = solve(s,0);
      cout<<ans<<'\n';
    }
}