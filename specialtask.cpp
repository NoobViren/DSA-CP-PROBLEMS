#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int k = 10;
    int ans = 1;
    unordered_set<char>st;
    for(int i= 0;i<s.size();i++){
       
        if(i==0 && s[i]=='?' ){
             ans *= 9;
        }
        else if(i==0 && (s[i]>='A' && s[i]<='J')){
            ans *= 9;//leading zeroes not allowed
            st.insert(s[i]);
            k--;
        }
        else if(i>0 && s[i]=='?'){
            ans *= 10;
        }
        else if(i>0 && s[i]>='A' && s[i]<='J'){
            if(st.count(s[i])) continue;
            else ans*=k;
            k--;
            st.insert(s[i]);
        }
    }
    cout<<ans<<'\n';
}