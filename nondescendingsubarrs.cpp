#include<bits/stdc++.h>
using namespace std;
bool issorted(vector<int>&v){
    for(int i = 0;i<v.size()-1;i++){
        if(v[i]>v[i+1]) return false;
    }
    return true;
}
int solve(int i ,vector<int>&a,vector<int>&b,int n){
    if(i==n){
        if(issorted(a) && issorted(b)){
            return 1;

        }
        return 0;
    }
    int ans = 0;
    ans+=solve(i+1,a,b,n);
    swap(a[i],b[i]);
    ans+=solve(i+1,a,b,n);
    return ans;

}
int main(){

}