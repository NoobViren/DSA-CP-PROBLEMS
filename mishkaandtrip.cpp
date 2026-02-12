#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n+1),b(k+1);
    for(int i = 1;i<=n;i++){
      cin>>a[i];
    }
    for(int i = 1;i<=k;i++){
      cin>>b[i];
    }
    
    int sum = 0;
    for(int i=1;i<=n;i++) sum += a[i];

    set<int>s;
    for(int i=1;i<=k;i++) s.insert(b[i]);

    int ans = 0;
    for(int i = 1;i<=n;i++){
      int next = (i % n) + 1;
      int prev = (i - 2 + n) % n + 1;

       if(s.count(i)>0){
         int cur = sum - a[i] - a[prev];
         cur = max(cur, 0);  
         ans += a[i] * cur;
         sum -= a[i];

       }
       else{
        
        ans += a[i]*(a[next]);
       }
    }
    
    cout<<ans<<'\n';

}