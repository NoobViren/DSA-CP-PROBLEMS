#include<bits/stdc++.h>
using namespace std;
int rangeSum(int l, int r, vector<int> &p) {
    if (l > r) return 0;
    return p[r] - (l > 0 ? p[l-1] : 0);
}
int solve(vector<int>&nums,int i ,int count,vector<int>&p){
    if(i==nums.size()) return 0;
    if(count == 0) return 0;
    int temp = INT_MIN;
    
    for(int k = i;k<nums.size();k++){
        if(count%2!=0 && k>i){
          temp = max(temp,rangeSum(i,k,p) - solve(nums,k,count-1,p));
          
        }
        else{
            temp = max(temp,-rangeSum(i,k,p) + solve(nums,k,count-1,p));
            
        }
    }
    return temp;

}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &x : a) cin>>x;
    vector<int>p(n);
    p[0] = a[0];
    for(int i = 1;i<n;i++){
        p[i] = p[i-1] + a[i];
    }


    int ans = solve(a,0,3,p);
    cout<<ans;
}