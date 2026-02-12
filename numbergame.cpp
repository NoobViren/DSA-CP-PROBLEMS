#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(auto &x : a) cin>>x;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i = 0;i<n;i++){
            pq.push(a[i]);
        }
        int k = 0;
        int turn = 1;
        while(!pq.empty()){
            int tp = pq.top();
            if()
        }
    }
}