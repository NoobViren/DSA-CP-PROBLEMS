#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();
    string ans;
    int ones = 0;
    for(int i = 0;i<n;i++){
        if(s[i]!='1'){
            ans.push_back(s[i]);
        }
        else ones++;
    }
    reverse(ans.begin(),ans.end());
    while(ones--){
        ans.push_back('1');
    }
    reverse(ans.begin(),ans.end());
    int count = 0;
    
    for(int i = 0;i<n;i++){
        if(ans[i] == '1'){
           count++;
           
        }
        else if(ans[i] == '2'){
            count =0;
        }
        else{
            swap(ans[i],ans[i-count]);
            
        }
        
        
    }
    for(int i = 0;i<n;i++){
        cout<<ans[i];
    }
    cout<<'\n';
    
    
}