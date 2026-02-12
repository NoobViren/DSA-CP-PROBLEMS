#include<bits/stdc++.h>
using namespace std;
map<char,int>mpp = {
    {'A' , 1},
    {'B' , 10},
    {'C' , 100},
    {'D' , 1000},
    {'E' , 10000}
};

int solve(string &s,int i,string &temp,int k){
    if(i<0) return 0;
    int ans = INT_MIN;
    
    if(s[i]==temp[i]){
        ans = max(ans,mpp[s[i]] + solve(s,i-1,temp,k));
        if(k>0){
            ans = max(ans,mpp['E'] + solve(s,i-1,temp,k-1));
        }
    }
    else{
        ans = max(ans,-mpp[s[i]] + solve(s,i-1,temp,k));
        if(k>0){
            ans = max(ans,mpp['E'] + solve(s,i-1,temp,k-1));
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        string temp = s;
        char cmp = s[n-1];
        for(int i = n-2;i>=0;i--){
           if(temp[i]<cmp){
            temp[i] = cmp;
           }
           else{
            cmp = temp[i];
           }
        }
        int ans = solve(s,n-1,temp,1);
        cout<<ans<<'\n';


    }
}
