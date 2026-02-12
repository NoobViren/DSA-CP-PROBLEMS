#include<bits/stdc++.h>
using namespace std;
//if u want to make the value at any idx equal to x..then the value at i+1 hould be atleast x-1,i+2 - x-2 an so on...try to form this array with k ops
int solve(vector<int>&a,int k){
    int n = a.size();
    int low = 0;
    int high = *max_element(a.begin(),a.end())+k;
    while(low <= high){
        int mid = low + (high-low)/2;
        for(int i = 0;i<n;i++){
            
        }
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(auto &x : a) cin>>x;
        
        
    }
}