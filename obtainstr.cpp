#include<bits/stdc++.h>
using namespace std;
int solve(string& s,string &target){
        unordered_map<char,vector<int>>mpp;
        int n = s.size();
        for(int i = 0;i<n;i++){
            mpp[s[i]].push_back(i);
        }
        int ops = 1;
        if(mpp[target[0]].empty()) return -1;
        int first = mpp[target[0]][0];

        
        
        for(int i = 1;i<target.size();i++){
            
            vector<int>&temp = mpp[target[i]];
            if(temp.size() == 0) return -1;
            int idx = upper_bound(temp.begin(),temp.end(),first)-temp.begin();
            if(idx == temp.size()){
                ops++;
                first = temp[0];
            }
            else{
                first = temp[idx];
            }
        }
        return ops;
    }


int main(){
    int t;
    cin>>t;
    while(t--){
        string s,target;
        cin>>s>>target;
        
        int ans = solve(s,target);
        cout<<ans<<'\n';
    }
}