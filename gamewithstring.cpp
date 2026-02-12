#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count = 0;
    stack<char>st;
    for(int i = 0;i<s.size();i++){
        if(!st.empty() && s[i]==st.top()){
           count++;
           st.pop();
        }
        else st.push(s[i]);
    }
    if(count%2!=0){
        cout<<"Yes"<<'\n';
    }
    else{
        cout<<"No"<<'\n';
    }
}