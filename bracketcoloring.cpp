#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char>st;
        int count = 0;
        int color = 0;
        for(int i = 0;i<n;i++){
            if(!st.empty() && s[i] == ')'){
                st.pop();
            }
            else if(s[i] == '(') st.push(s[i]);
        }
    }
}