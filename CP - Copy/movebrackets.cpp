#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        string s;
        cin>>s;
        stack<int>st;
        int count = 0;
        for(int i = 0;i<n;i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else if(!st.empty() && s[i]==')' && st.top()=='('){
                  st.pop();
            }
            else if(s[i]==')' && st.empty()){
                count++;
            }
        }
        cout<<count<<endl;
    }
}