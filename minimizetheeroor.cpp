#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n,k1,k2;
    cin>>n>>k1>>k2;
    vector<int>a(n),b(n);
    for(auto &x : a) cin>>x;
    for(auto &y : b) cin>>y;
    vector<int>diff(n);
    priority_queue<int>pq;
    int k = k1+k2;
    for(int i = 0;i<n;i++){
        pq.push(abs(a[i]-b[i]));
    }
    while(pq.top()>0 && k>0){
        int x = pq.top();
        pq.pop();
        pq.push(x-1);
        k--;
    }
    int ans = 0;
    while(!pq.empty()){
        ans += (pq.top())*(pq.top());
        pq.pop();
    }
    if(k%2==1){
        ans+=1;
    }
    cout<<ans<<'\n';
    
  

}
