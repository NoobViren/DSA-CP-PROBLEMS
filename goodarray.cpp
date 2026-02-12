#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &x : a) cin>>x;
    
    map<int,int>mpp;
    for(int i = 0;i<n;i++){
        mpp[a[i]] = i;

    }
    int sum = accumulate(a.begin(),a.end(),0);
    int count = 0;
    vector<int>ans;
    for(int i = n-1;i>=0;i--){
        int target = sum - a[i];
        if(mpp.find(target/2)!=mpp.end() && mpp[target] != i){
            count++;
            ans.push_back(i);
        }
    }

}