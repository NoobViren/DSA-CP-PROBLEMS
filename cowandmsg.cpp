#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.size();
    vector<int>mpp(26);
    for(int i = 0;i<n;i++){
        mpp[s[i]-'a']++;
    }
    // main logic is that the secret message can only be of length 1 or 2...
    // implementation left
    
    vector<int>temp(26);
    vector<int>ans(26);
    int ans = 0;
    for(int i = 0;i<n;i++){
        
        mpp[s[i]-'a']--;
        temp[s[i]-'a']++;
        int m = tem
        for(int j = 0;j<26;j++){
           if(s[j] == s[i]) continue;
           m*=mpp[s[j]-'a'];
        }
        ans = max(ans,m);
        
    }
    
    

}